#include "rtapi.h"
#include "rtapi_ctype.h"
#include "rtapi_app.h"
#include "rtapi_string.h"
#include "rtapi_errno.h"
#include "rtapi_math64.h"
#include <rtapi_io.h>
#include "hal.h"

/* module information */
MODULE_AUTHOR("Skynet");
MODULE_DESCRIPTION("Halmodule");
MODULE_LICENSE("GPL");

static int comp_idx;

typedef struct {
    bool ok;
} skynet_t;
skynet_t *skynet;

typedef struct {
    hal_float_t *Pin;
} float_data_t;

//! Pins
typedef struct {
    hal_bit_t *Pin;
} bit_data_t;
bit_data_t *enable;

typedef struct {
    hal_s32_t *Pin;
} s32_data_t;

typedef struct {
    hal_u32_t *Pin;
} u32_data_t;

typedef struct {
    hal_port_t *Pin;
} port_data_t;
port_data_t *port;

//! Params
typedef struct {
    hal_float_t Pin;
} param_float_data_t;

typedef struct {
    hal_bit_t Pin;
} param_bit_data_t;

struct state_machine_vector *ptr; // Pointer to vector c++ class.
extern struct state_machine_vector* vector_init_ptr();
extern void vector_detach(struct state_machine_vector *ptr);
extern double vector_test_value(struct state_machine_vector *ptr);

static int comp_idx; /* component ID */

static void the_function();
static int setup_pins();

int rtapi_app_main(void) {

    int r = 0;
    comp_idx = hal_init("state_machine");
    if(comp_idx < 0) return comp_idx;
    r = hal_export_funct("the_function", the_function, &skynet,0,0,comp_idx);

    r+=setup_pins();

    if(r) {
        hal_exit(comp_idx);
    } else {
        hal_ready(comp_idx);
    }

    ptr=vector_init_ptr();

    return 0;
}

void rtapi_app_exit(void){
    vector_detach(ptr);
    hal_exit(comp_idx);
}

//! Perforn's every ms.
static void the_function(){

    rtapi_print_msg(RTAPI_MSG_ERR,"function call is active.. %f \n",vector_test_value(ptr));

    if(*enable->Pin==1){

    }
}

static int setup_pins(){
    int r=0;

    //! Input pins, type bit.
    enable = (bit_data_t*)hal_malloc(sizeof(bit_data_t));
    r+=hal_pin_bit_new("state_machine.enable",HAL_IN,&(enable->Pin),comp_idx);

    return r;
}





































