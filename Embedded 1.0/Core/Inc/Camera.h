/*
 * Camera.h
 *
 *  Created on: Dec 15, 2022
 *      Author: tntcl
 */

#ifndef SRC_CAMERA_H_
#define SRC_CAMERA_H_

#define SetCAMCS HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_SET)
#define ClrCAMCS HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET)

void cam_pic(SPI_HandleTypeDef *hspi);
HAL_StatusTypeDef cam_int(I2C_HandleTypeDef *hi2c1);
void cam_cap(SPI_HandleTypeDef*, I2C_HandleTypeDef*, UART_HandleTypeDef*);
void cam_tx(SPI_HandleTypeDef *hspi1,UART_HandleTypeDef *huart2);


#endif /* SRC_CAMERA_H_ */
