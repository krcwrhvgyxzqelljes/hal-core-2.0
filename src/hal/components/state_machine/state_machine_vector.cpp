#include "state_machine_vector.h"
#include <iostream>
#include <sys/ipc.h>
#include <sys/shm.h>

#ifdef __cplusplus

state_machine_vector::state_machine_vector() {
    // Initialize shared memory upon construction
    tvec = {1.0, 2.0, 3.0}; // Example initialization of tvec
    create_shared_memory();
}

state_machine_vector::~state_machine_vector()
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

void state_machine_vector::create_shared_memory()
{
    // Create a shared memory segment
    shm_id = shmget(SHM_KEY, sizeof(double) * tvec.size(), IPC_CREAT | 0666);
    if (shm_id == -1) {
        perror("shmget");
        throw std::runtime_error("Failed to create shared memory segment.");
    }

    // Attach the shared memory segment
    attach_shared_memory();

    // Initialize shared memory with tvec data
    update_shared_memory();

    std::cout<<"created shared memory in hal"<<std::endl;
}

void state_machine_vector::attach_shared_memory()
{
    // Attach the shared memory segment
    shm_ptr = (double*) shmat(shm_id, nullptr, 0);
    if (shm_ptr == (double*) -1) {
        perror("shmat");
        throw std::runtime_error("Failed to attach shared memory segment.");
    }
}

void state_machine_vector::update_shared_memory()
{
    // Update shared memory with tvec data
    for (size_t i = 0; i < tvec.size(); ++i) {
        shm_ptr[i] = tvec[i];
    }
}

double state_machine_vector::get_shared_memory_value()
{
    // Return the value from shared memory (e.g., shm_ptr[0])
    return shm_ptr[0];
}

#else // C code

// Implement C-compatible functions here if needed

#endif // __cplusplus


extern "C" struct state_machine_vector* vector_init_ptr(){
    return new state_machine_vector();
}

extern "C" double vector_test_value(struct state_machine_vector *ptr){
    return ptr->get_shared_memory_value();
}




