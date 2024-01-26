/*uart.c de kullanılan fonksiyon çağrılır , main.c de uart.h çağrılır,
  while(1) döngüsünde uartTransmit(); çağrılır ekstra başka ayar yapılmaz*/
#include "stm32f4xx_hal.h"
#ifndef INC_UART_H_
#define INC_UART_H_
extern UART_HandleTypeDef huart5;

void uartTransmit();
void uartTransmit2();



#endif
