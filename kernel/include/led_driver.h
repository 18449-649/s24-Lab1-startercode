/**
 * @file 
 *
 * @brief      
 *
 * @date       
 *
 * @author     
 */

#ifndef _LED_DRIVER_H_
#define _LED_DRIVER_H_

#include <unistd.h>

void led_driver_init(uint32_t addr);

void led_set_display(uint32_t input);

#endif /* _LED_DRIVER_H_ */
