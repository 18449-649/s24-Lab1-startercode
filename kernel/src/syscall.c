/**
 * @file 
 *
 * @brief      
 *
 * @date       
 *
 * @author     
 */

#include <unistd.h>
#include <syscall.h>

#define UNUSED __attribute__((unused))

void *sys_sbrk(UNUSED int incr){
  return NULL;
}

int sys_write(UNUSED int file, UNUSED char *ptr, UNUSED int len){
  return -1;
}

int sys_read(UNUSED int file, UNUSED char *ptr, UNUSED int len){
  return -1;
}

void sys_exit(UNUSED int status){
}

/**
 * @brief Enables a specific servo channel based on the parameters
 * 
 * @param channel - which channel the servo is plugged in to
 * @param enabled - 1 if the channel should be enabled, 0 if disabled
 * @return * int 
 */
int sys_servo_enable(UNUSED uint8_t channel, UNUSED uint8_t enabled){
}

/**
 * @brief Turns the servo to the specified angle
 * 
 * @param channel - which channel the servo is plugged in to
 * @param angle - the angle which the servo should rotate to
 * @return int 
 */
int sys_servo_set(UNUSED uint8_t channel, UNUSED uint8_t angle){
}