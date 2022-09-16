/*
 * uart.c
 *
 *  Created on: Oct 24, 2021
 *      Author: DELL
 */

#include "commonmacros.h"
#include "uart.h"
#include<avr/io.h>
void UART_init(const UART_config_Type*config_type){
	uint16 ubrr_value = 0;
	UCSRA=(1<<U2X);
	UCSRB=(1<<RXEN)|(1<<TXEN);
	SET_BIT(UCSRC,URSEL);
	UCSRC=((UCSRC&0XF9)|((config_type->number_of_bits)<<1));
	UCSRC=(UCSRC&0XF7)|((config_type->stop)<<3);
	UCSRC=(UCSRC&0XCF)|((config_type->barity)<<4);
	ubrr_value=(uint16)(((F_CPU)/(8UL*(config_type->baud_rate)))-1);
	UBRRL=ubrr_value;
	UBRRH=ubrr_value>>8;
}
void UART_sendByte(uint8 data){
	UDR=data;
	while(BIT_IS_CLEAR(UCSRA,TXC));
	SET_BIT(UCSRA,TXC);
	/*
	 while(BIT_IS_CLEAR(UCSRA,UDRE)){}
	 UDR=data;
	 */
}
uint8 UART_recieveByte(void){
	while(BIT_IS_CLEAR(UCSRA,RXC));
	return UDR;
}
void UART_sendstring(const uint8*str){
	uint8 i = 0;
	while(str[i]!='\0'){
		UART_sendByte(str[i]);
		i++;
	}
}
void UART_recievestring(uint8*str){
	uint8 i=0;
	str[i]=UART_recieveByte();
	while(str[i]!='#'){
		i++;
		str[i] =UART_recieveByte();
	}
	str[i]='\0';
}








