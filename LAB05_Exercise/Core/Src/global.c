/*
 * global.c
 *
 *  Created on: Dec 13, 2024
 *      Author: Admin
 */
#include "global.h"
uint8_t temp = 0;
uint8_t buffer [ MAX_BUFFER_SIZE ];
uint8_t index_buffer = 0;
uint8_t buffer_flag = 0;
uint8_t start_flag = 0;
uint32_t ADC_value = 0;
uint8_t command_mode = 0;
uint8_t rst_flag = 0;
uint8_t ok_flag = 0;

char str[50];

uint8_t uart_state = UART_IDLE;
