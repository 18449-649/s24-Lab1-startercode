/**
 * @file 
 *
 * @brief          
 *
 * @date       
 * @author  Ayesha Gupta   
 * @author  Sruti Srinidhi   
 */

#include <unistd.h>
#include <syscall.h>
#include "gpio.h"
#include "timer.h"

#define UNUSED __attribute__((unused))

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
