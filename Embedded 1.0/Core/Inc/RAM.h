/*
 * RAM.h
 *
 *  Created on: Dec 10, 2022
 *      Author: tntcl
 */

#ifndef SRC_RAM_H_
#define SRC_RAM_H_

#define SetRAMCS HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_SET)
#define ClrRAMCS HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_RESET)

void RAM_Set_Mode(uint8_t mode, SPI_HandleTypeDef *hspi);
void RAM_WR(uint8_t data, uint16_t adr, SPI_HandleTypeDef* hspi);
uint8_t RAM_RD(uint16_t add, SPI_HandleTypeDef* hspi);



#endif /* SRC_RAM_H_ */
