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

#define SERVO0_PORT GPIO_B
#define SERVO0_PINNUM 10

#define SERVO1_PORT GPIO_A
#define SERVO1_PINNUM 8

#define TIMER_FREQ 100000

#define UNUSED __attribute__((unused))

void servo_init() {
  gpio_init( SERVO0_PORT, SERVO0_PINNUM, MODE_GP_OUTPUT, OUTPUT_PUSH_PULL, OUTPUT_SPEED_VERY_HIGH, PUPD_NONE, ALT0 );
  gpio_init( SERVO1_PORT, SERVO1_PINNUM, MODE_GP_OUTPUT, OUTPUT_PUSH_PULL, OUTPUT_SPEED_VERY_HIGH, PUPD_NONE, ALT0 );
  timer_start( TIMER_FREQ );
}

int sys_servo_enable(UNUSED uint8_t channel, UNUSED uint8_t enabled){

  return 0;
}

int sys_servo_set(UNUSED uint8_t channel, UNUSED uint8_t angle) {

  return 0;

}

void servo_systick_handler() {

}
