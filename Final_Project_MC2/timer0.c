/*
 * timer0.c
 *
 *  Created on: Nov 4, 2021
 *      Author: DELL
 */
#include "commonmacros.h"
#include "timer0.h"
#include <avr/io.h>
#include <avr/interrupt.h> /* For TIMER0 ISR_s */

/* Global variables to hold the address of the call back function in the application */
static volatile void (*g_callBackPtr)(void) = NULL_PTR;
/*******************************************************************************
 *                       Interrupt Service Routines                            *
 *******************************************************************************/

ISR(TIMER0_OVF_vect)
{
	if(g_callBackPtr != NULL_PTR)
	{
		(*g_callBackPtr)(); /* another method to call the function using pointer to function g_callBackPtr(); */
	}
}
ISR(TIMER0_COMP_vect)
{
	if(g_callBackPtr != NULL_PTR)
	{
		(*g_callBackPtr)(); /* another method to call the function using pointer to function g_callBackPtr(); */
	}
}
void Timer0_init(const TIMER0_config_Type *config_type){
	SET_BIT(TCCR0,FOC0);
    TCCR0=(TCCR0&0XF7)|((config_type->mode)<<WGM01);
    TCCR0=(TCCR0&0XF8)|(config_type->prescalar);
    TCNT0=config_type->initial_value;
    if((config_type->mode)==1){
    	TIMSK|=(1<<OCIE0);
    	OCR0=config_type->compare_value;
    }
    else if((config_type->mode)==0){
    	TIMSK|=(1<<TOIE0);
    }
    }
void Timer0_setCallBack(void(*a_ptr)(void))
{
	/* Save the address of the Call back function in a global variable */
	g_callBackPtr = a_ptr;
}
void Timer0_Deinit(void){
	TCNT0=0;
	TCCR0=0;
	OCR0=0;
	TIMSK&=~(1<<OCIE0);
	TIMSK&=~(1<<TOIE0);
}

