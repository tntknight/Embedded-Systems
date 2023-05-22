/*
 * Prox.h
 *
 *  Created on: Dec 14, 2022
 *      Author: tntcl
 */

#ifndef INC_PROX_H_
#define INC_PROX_H_

void prox_en(I2C_HandleTypeDef*, UART_HandleTypeDef* );
uint16_t prox_data(I2C_HandleTypeDef*);

#define PROX_ADR 0xC0

#endif /* INC_PROX_H_ */
