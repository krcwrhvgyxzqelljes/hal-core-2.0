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

extern "C" void shm_update(struct state_machine_shm *ptr){

    // Acquire lock to ensure exclusive access
    std::lock_guard<std::mutex> lock(mtx);

    ptr->shm_ptr->halruntime+=0.001;

    if(ptr->shm_ptr->online_mode==ONLINE){

        //std::cout<<"hal online."<<std::endl;
        if(ptr->shm_ptr->state_mode==MANUAL){

            for(uint id=0; id<10; id++){

                // Jog step trigger reset on button release.
                if(ptr->shm_ptr->jog_step_trigger[id] && ptr->shm_ptr->jog[id]==0){
                    ptr->shm_ptr->jog_step_trigger[id]=0;
                }

                // Apply the jog stepsize if jog step is active, respect machine limits.
                if(ptr->shm_ptr->jog_step_enable && !ptr->shm_ptr->jog_step_trigger[id]){
                    ptr->shm_ptr->maxpos[id]= fmin( ptr->shm_ptr->scd[id].maxpos, ptr->shm_ptr->scd[id].guipos+ptr->shm_ptr->jog_step_size );
                    ptr->shm_ptr->minpos[id]= fmax( ptr->shm_ptr->scd[id].minpos, ptr->shm_ptr->scd[id].guipos-ptr->shm_ptr->jog_step_size );
                    ptr->shm_ptr->jog_step_trigger[id]=1;
                }

                // Apply the machine limits to the jog.
                if(!ptr->shm_ptr->jog_step_enable){
                    ptr->shm_ptr->maxpos[id]=ptr->shm_ptr->scd[id].maxpos;
                    ptr->shm_ptr->minpos[id]=ptr->shm_ptr->scd[id].minpos;
                }

                // Jog routine.
                if(ptr->shm_ptr->jog[id]==1){
                    scurve_engine().jog_position_master(ptr->shm_ptr->scd[id],1,0,0,ptr->shm_ptr->maxpos[id],1,0);
                }
                if(ptr->shm_ptr->jog[id]==0){
                    if(ptr->shm_ptr->scd[0].guivel>=0){
                        scurve_engine().jog_velocity(ptr->shm_ptr->scd[id],0,0,0,ptr->shm_ptr->maxpos[id]);
                    } else {
                        scurve_engine().jog_velocity(ptr->shm_ptr->scd[id],0,0,0,ptr->shm_ptr->minpos[id]);
                    }
                }
                if(ptr->shm_ptr->jog[id]==-1){
                    scurve_engine().jog_position_master(ptr->shm_ptr->scd[id],1,0,0,ptr->shm_ptr->minpos[id],0,1);
                }
                scurve_engine().jog_update(ptr->shm_ptr->scd[id]);
                ptr->shm_ptr->pos[id]=ptr->shm_ptr->scd[id].guipos;
            }

            // Get the total velocity for xyz moves to display in the dro.
            ptr->shm_ptr->curvel=combined_velocity(ptr->shm_ptr->scd[0].guivel,ptr->shm_ptr->scd[1].guivel,ptr->shm_ptr->scd[2].guivel);
        }

        if(ptr->shm_ptr->state_mode==AUTO){

            std::cout<<"gcode vec size:"<<ptr->shm_ptr->svec.size()<<std::endl;

        }
        if(ptr->shm_ptr->state_mode==MDI){

        }
    }
}

































