/**
 * @file kernel.c
 *
 * @brief      Kernel entry point
 *
 * @date       
 * @author     
 */

#include "arm.h"
#include "kernel.h"
#include "printk.h"
#include "uart_polling.h"

/** @brief Baud Rate */
#define BAUD (115200)

int kernel_main( void ) {
  init_349(); // DO NOT REMOVE THIS LINE
  uart_polling_init (BAUD);
  char input;
  while(1){
  input = uart_polling_get_byte();
    while(!input){
      input = uart_polling_get_byte();
    }
    uart_polling_put_byte(input);
  }
  return 0;
}
