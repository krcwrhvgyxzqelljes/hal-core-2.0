#ifndef TP_STATE_MACHINE_H
#define TP_STATE_MACHINE_H

//! Author  : Skynet Cyberdyne
//! Licence : MIT
//! Date    : 2023

#ifdef __cplusplus

#include <vector>
#include <iostream>
#include <cmath>

// Define the key for shared memory
#define SHM_KEY 1234  // Example key value

class state_machine_vector
{
public:

    //! Constructor.
    state_machine_vector();
    ~state_machine_vector();

    std::vector<double> tvec;

    void create_shared_memory();
    void update_shared_memory(); // Method to update shared memory
    double get_shared_memory_value(); // Getter method for accessing shm_ptr[0]


private:
    int shm_id;
    double* shm_ptr;

    void attach_shared_memory();
};

//! Here it tells if this code is used in c, convert the class to a struct. This is handy!
#else
typedef struct state_machine_vector state_machine_vector;
#endif //! cplusplus

#endif




















