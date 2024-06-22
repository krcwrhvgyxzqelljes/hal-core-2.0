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

/*

Usage:

    shared_mem_data d;
    d.dvalue=2223333333;
    d.value=12;
    smv->write_to_shared_memory(d);

*/

#include "gcode_parser.h"

struct shared_mem_data {
    int value;
    double dvalue;

    std::vector<shape> svec;
};

class state_machine_vector
{
public:

    //! Constructor.
    state_machine_vector();
    ~state_machine_vector();

    // shared_mem_data sdata;

    void create_shared_memory();
    void write_to_shared_memory(shared_mem_data data); // Method to update shared memory

    void attach_shared_memory();
    void detach_shared_memory();

    shared_mem_data read_from_shared_memory(); // Getter method for accessing shm_ptr[0]

    shared_mem_data* shm_ptr; // Pointer to shared memory data

private:
    int shm_id;

};

//! Here it tells if this code is used in c, convert the class to a struct. This is handy!
#else
typedef struct state_machine_vector state_machine_vector;
#endif //! cplusplus

#endif




















