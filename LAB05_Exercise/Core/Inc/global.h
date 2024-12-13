/*
 * global.h
 *
 *  Created on: Dec 13, 2024
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "main.h"
#define MAX_BUFFER_SIZE 40

#define  UART_IDLE			1
#define  UART_RECEIVING		2
#define  UART_PROCESSING	3
#define  UART_WAIT			4
extern uint8_t temp;
extern uint8_t buffer [ MAX_BUFFER_SIZE ];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;
extern uint8_t start_flag;
extern uint32_t ADC_value;
extern uint8_t command_mode;
extern uint8_t rst_flag;
extern uint8_t ok_flag;

extern uint8_t uart_state;

extern char str[50];

#endif /* INC_GLOBAL_H_ */
