/**
 * @file    servo.h
 *
 * @brief   Prototypes for servo functions
 *
 * @date    17 Feb 2020
 *
 * @author  Benjamin Huang <zemingbh@andrew.cmu.edu>
 */

#ifndef _SERVO_H_
#define _SERVO_H_

void servo_init();

int sys_servo_enable(uint8_t channel, uint8_t enabled);

int sys_servo_set(uint8_t channel, uint8_t angle);

void servo_systick_handler();

#endif /* _SERVO_H_ */
