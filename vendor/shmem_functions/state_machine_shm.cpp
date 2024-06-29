#include "state_machine_shm.h"
#include <iostream>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <mutex>
#include "../../../../vendor/scurve/scurve_engine/scurve_engine.h"

#ifdef __cplusplus

std::mutex mtx; // Declaration of std::mutex

state_machine_shm::state_machine_shm() {
    create_shared_memory();
}

// For c++.
state_machine_shm::~state_machine_shm()
{
    // Detach and remove shared memory when destroying the object
    if (shm_ptr) {
        if (shmdt(shm_ptr) == -1) {
            perror("shmdt");
        }
    }
    if (shmctl(shm_id, IPC_RMID, nullptr) == -1) {
        perror("shmctl");
    }
}

// For c.
void state_machine_shm::detach_shared_memory(){
    // Detach and remove shared memory when destroying the object
    if (shm_ptr) {
        if (shmdt(shm_ptr) == -1) {
            perror("shmdt");
        }
    }
    if (shmctl(shm_id, IPC_RMID, nullptr) == -1) {
        perror("shmctl");
    }
}

void state_machine_shm::create_shared_memory()
{
    // Create a shared memory segment
    shm_id = shmget(SHM_KEY, sizeof(shared_mem_data), IPC_CREAT | 0666);
    if (shm_id == -1) {
        perror("shmget");
        throw std::runtime_error("Failed to create shared memory segment.");
    }

    // Attach the shared memory segment
    attach_shared_memory();

    std::cout << "Created shared memory segment" << std::endl;
}

void state_machine_shm::attach_shared_memory()
{
    // Attach the shared memory segment
    shm_ptr = (shared_mem_data*) shmat(shm_id, nullptr, 0);
    if (shm_ptr == (shared_mem_data*) -1) {
        perror("shmat");
        throw std::runtime_error("Failed to attach shared memory segment.");
    }
}

void state_machine_shm::write_to_shared_memory(shared_mem_data data)
{
    // Acquire lock to ensure exclusive access
    std::lock_guard<std::mutex> lock(mtx);

    // Update shared memory with sdata
    *shm_ptr = data;
}

shared_mem_data state_machine_shm::read_from_shared_memory(){

    // Acquire lock to ensure exclusive access
    std::lock_guard<std::mutex> lock(mtx);

    // Return the value from shared memory
    return *shm_ptr;
}

#else // C code

// Implement C-compatible functions here if needed

#endif // __cplusplus

extern "C" struct state_machine_shm* shm_init_ptr(){
    return new state_machine_shm();
}

extern "C" void shm_detach(struct state_machine_shm *ptr){
    std::cout<<"removing shared memory from hal"<<std::endl;
    ptr->detach_shared_memory();
}

// Function to calculate the combined velocity for x,y,z axis.
double combined_velocity(double vx, double vy, double vz) {
    return std::sqrt(vx * vx + vy * vy + vz * vz);
}

scurve_data scde[10];

extern "C" void shm_update(struct state_machine_shm *ptr){

    // Acquire lock to ensure exclusive access
    std::lock_guard<std::mutex> lock(mtx);

    shared_mem_data &shm=*ptr->shm_ptr;

    shm.halruntime+=0.001;

    if(shm.online_mode==ONLINE){

        //std::cout<<"hal online."<<std::endl;
        if(shm.state_mode==MANUAL){

            for(uint id=0; id<10; id++){

                if(!shm.jog_step_enable){
                    shm.maxpos[id]=shm.scd[id].maxpos;
                    shm.minpos[id]=shm.scd[id].minpos;
                }

                // Jog step trigger reset on button release.
                if(shm.jog_step_enable && shm.jog[id]==0){
                    shm.jog_step_trigger[id]=0;
                }

                // Apply the jog stepsize if jog step is active, respect machine limits.
                if(shm.jog_step_enable && !shm.jog_step_trigger[id] && shm.jog[id]!=0){
                    shm.maxpos[id]= fmin( shm.scd[id].maxpos, shm.scd[id].guipos+shm.jog_step_size );
                    shm.minpos[id]= fmax( shm.scd[id].minpos, shm.scd[id].guipos-shm.jog_step_size );
                    shm.jog_step_trigger[id]=1;
                }

                if(shm.jog_to_zero[id]){
                    if(shm.scd[id].guipos>1e-6){
                        shm.jog[id]=-1;
                        shm.minpos[id]=0;
                    } else
                        if(shm.scd[id].guipos<1e-6){
                            shm.jog[id]=1;
                            shm.maxpos[id]=0;
                        } else {
                            shm.jog[id]=0; // Do nothing.
                            shm.minpos[id]=-INFINITY;
                            shm.maxpos[id]=INFINITY;
                        }
                }

                // Jog routine.
                if(shm.jog[id]==1){
                    scurve_engine::jog_position_master(shm.scd[id],1,0,0,shm.maxpos[id],1,0);
                    //scurve_engine::jog_update(shm.scd[id]);
                    //shm.pos[id]=shm.scd[id].guipos;
                }
                if(shm.jog[id]==-1){
                    scurve_engine::jog_position_master(shm.scd[id],1,0,0,shm.minpos[id],0,1);
                   // scurve_engine::jog_update(shm.scd[id]);
                   // shm.pos[id]=shm.scd[id].guipos;
                }
                if(shm.jog[id]==0){
                    if(shm.scd[id].guivel>0){
                        scurve_engine::jog_position_master(shm.scd[id],0,0,0,shm.maxpos[id],1,0);
                     //   scurve_engine::jog_update(shm.scd[id]);
                     //   shm.pos[id]=shm.scd[id].guipos;
                    }
                    if(shm.scd[id].guivel<0){
                        scurve_engine::jog_position_master(shm.scd[id],0,0,0,shm.minpos[id],0,1);
                      //  scurve_engine::jog_update(shm.scd[id]);
                     //   shm.pos[id]=shm.scd[id].guipos;
                    }

                }
                scurve_engine::jog_update(shm.scd[id]);
                shm.pos[id]=shm.scd[id].guipos;

            }
        }

        // Get the total velocity for xyz moves to display in the dro.
        shm.curvel=combined_velocity(shm.scd[0].guivel,shm.scd[1].guivel,shm.scd[2].guivel);

        if(shm.state_mode==AUTO){

            std::cout<<"gcode vec size:"<<shm.svec.size()<<std::endl;

        }
        if(shm.state_mode==MDI){

        }
    }

}

//extern "C" void shm_update(struct state_machine_shm *ptr){

//    // Acquire lock to ensure exclusive access
//    std::lock_guard<std::mutex> lock(mtx);

//    shared_mem_data &shm=*ptr->shm_ptr;

//    shm.halruntime+=0.001;

//    if(shm.online_mode==ONLINE){

//        //std::cout<<"hal online."<<std::endl;
//        if(shm.state_mode==MANUAL){

//            for(uint id=0; id<10; id++){

//                // Jog step trigger reset on button release.
//                if(shm.jog_step_trigger[id] && shm.jog[id]==0){
//                    shm.jog_step_trigger[id]=0;
//                }

//                // Apply the jog stepsize if jog step is active, respect machine limits.
//                if(shm.jog_step_enable && !shm.jog_step_trigger[id]){
//                    shm.maxpos[id]= fmin( shm.scd[id].maxpos, shm.scd[id].guipos+shm.jog_step_size );
//                    shm.minpos[id]= fmax( shm.scd[id].minpos, shm.scd[id].guipos-shm.jog_step_size );
//                    shm.jog_step_trigger[id]=1;
//                }

//                // Apply the machine limits to the jog.
//                if(!shm.jog_step_enable){
//                    shm.maxpos[id]=shm.scd[id].maxpos;
//                    shm.minpos[id]=shm.scd[id].minpos;
//                }

//                // Jog routine.
//                if(shm.jog[id]==1){
//                    scurve_engine().jog_position_master(shm.scd[id],1,0,0,shm.maxpos[id],1,0);
//                }
//                if(shm.jog[id]==0){
//                    if(shm.scd[0].guivel>=0){
//                        scurve_engine().jog_velocity(shm.scd[id],0,0,0,shm.maxpos[id]);
//                    } else {
//                        scurve_engine().jog_velocity(shm.scd[id],0,0,0,shm.minpos[id]);
//                    }
//                }
//                if(shm.jog[id]==-1){
//                    scurve_engine().jog_position_master(shm.scd[id],1,0,0,shm.minpos[id],0,1);
//                }
//                scurve_engine().jog_update(shm.scd[id]);
//                shm.pos[id]=shm.scd[id].guipos;
//            }

//            // Get the total velocity for xyz moves to display in the dro.
//            shm.curvel=combined_velocity(shm.scd[0].guivel,shm.scd[1].guivel,shm.scd[2].guivel);
//        }

//        if(shm.state_mode==AUTO){

//            std::cout<<"gcode vec size:"<<shm.svec.size()<<std::endl;

//        }
//        if(shm.state_mode==MDI){

//        }
//    }
//}

































