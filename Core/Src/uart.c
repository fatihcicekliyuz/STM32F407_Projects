#include "stm32f4xx_hal.h"
#include "uart.h"
void uartTransmit(){
  uint8_t c;

  if(HAL_UART_Receive(&huart5, &c, 1, 500) == HAL_OK){
	  HAL_UART_Transmit(&huart5, &c, 1, 500);
  }
}

void uartTransmit2(){
  uint8_t txdata[30]= "Hi everyone\n\r";
  uint8_t rxdata[2];

  //HAL_UART_Transmit(&huart5, txdata,sizeof(txdata), 100);
  HAL_UART_Receive(&huart5, rxdata, sizeof(rxdata), 100);



}

