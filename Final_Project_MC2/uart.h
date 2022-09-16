/*
 * uart.h
 *
 *  Created on: Nov 4, 2021
 *      Author: DELL
 */

#ifndef UART_H_
#define UART_H_
#include "std_types.h"
typedef enum{
BIT_5,BIT_6,BIT_7,BIT_8
}BIT_DATA;
typedef enum{
	BIT_1,BIT_2
}NUMBER_OF_STOP_BIT;
typedef enum{
	DISABLED,RESERVED,ENABLED_EVEN,ENABLED_ODD
}BARITY_BIT;
typedef struct{
	BARITY_BIT barity;
	NUMBER_OF_STOP_BIT stop;
	BIT_DATA number_of_bits;
	uint32 baud_rate;
}UART_config_Type;
void UART_init(const UART_config_Type*config_type);
void UART_sendByte(uint8 data);
uint8 UART_recieveByte(void);
void UART_sendstring(const uint8*str);
void UART_recievestring(uint8*str);


#endif /* UART_H_ */
