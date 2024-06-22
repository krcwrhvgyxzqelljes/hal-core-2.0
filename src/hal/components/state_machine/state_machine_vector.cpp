#include "state_machine_vector.h"
#include <iostream>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <mutex>

#ifdef __cplusplus

std::mutex mtx; // Declaration of std::mutex

state_machine_vector::state_machine_vector() {
    create_shared_memory();
}

// For c++.
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

// For c.
void state_machine_vector::detach_shared_memory(){
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
    shm_id = shmget(SHM_KEY, sizeof(shared_mem_data), IPC_CREAT | 0666);
    if (shm_id == -1) {
        perror("shmget");
        throw std::runtime_error("Failed to create shared memory segment.");
    }

    // Attach the shared memory segment
    attach_shared_memory();

    std::cout << "Created shared memory segment" << std::endl;
}

void state_machine_vector::attach_shared_memory()
{
    // Attach the shared memory segment
    shm_ptr = (shared_mem_data*) shmat(shm_id, nullptr, 0);
    if (shm_ptr == (shared_mem_data*) -1) {
        perror("shmat");
        throw std::runtime_error("Failed to attach shared memory segment.");
    }
}

void state_machine_vector::write_to_shared_memory(shared_mem_data data)
{
    // Acquire lock to ensure exclusive access
    std::lock_guard<std::mutex> lock(mtx);

    // Update shared memory with sdata
    *shm_ptr = data;
}

shared_mem_data state_machine_vector::read_from_shared_memory(){

    // Acquire lock to ensure exclusive access
    std::lock_guard<std::mutex> lock(mtx);

    // Return the value from shared memory
    return *shm_ptr;
}

#else // C code

// Implement C-compatible functions here if needed

#endif // __cplusplus

extern "C" struct state_machine_vector* vector_init_ptr(){
    return new state_machine_vector();
}

extern "C" void vector_detach(struct state_machine_vector *ptr){
    std::cout<<"removing shared memory from hal"<<std::endl;
    ptr->detach_shared_memory();
}

extern "C" double vector_test_value(struct state_machine_vector *ptr){

    // Acquire lock to ensure exclusive access
    std::lock_guard<std::mutex> lock(mtx);

    int size=ptr->shm_ptr->svec.size();

    return size;
}




