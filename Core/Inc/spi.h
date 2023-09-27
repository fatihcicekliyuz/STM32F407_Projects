/* spi.c den fonksiyon çağrılır sonrasında main.c de spi.h tanımlanır*/
/* Rcc den hse crystal&ceramic aktif edilik 168mhz hızında*/
/*main.c de main voidin hemen altında SPI_Init(); çağrılır*/
/*while(1) dögüsünde
 * uint8_t sendData = 0xAB;
 * HAL_SPI_Transmit(&hspi1, &sendData, 1, HAL_MAX_DELAY);
 * komutları yazılarak işlem sonlanır ve lojij analizörden gözlem yapılır*/
#include "stm32f4xx_hal.h"
#ifndef INC_SPI_H_
#define INC_SPI_H_
extern SPI_HandleTypeDef hspi1;
void SPI_Init(void);

#endif


