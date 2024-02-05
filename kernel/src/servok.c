/**
 * @file   servo.c
 *
 * @brief  servo syscalls and kernel functions
 *
 * @date   Feb 18, 2020
 *
 * @author Benjamin Huang <zemingbh@andrew.cmu.edu>
 */

#include <gpio.h>
#include <unistd.h>
#include <servok.h>
#include <timer.h>

#define UNUSED __attribute__((unused))

void servo_init() {
}

int sys_servo_enable(UNUSED uint8_t channel, UNUSED uint8_t enabled){

  return 0;
}

int sys_servo_set(UNUSED uint8_t channel, UNUSED uint8_t angle) {

  return 0;

}

void servo_systick_handler() {

}
