/*
 * pwm_Driver.c
 *
 *  Created on: Nov 4, 2021
 *      Author: DELL
 */
#include"commonmacros.h"
#include"pwm_Driver.h"
#include<avr/io.h>
void PWM_Timer0_START(uint8 duty_cycle){
GPIO_setupPinDirection(PORTB_ID,PIN3_ID,PIN_OUTPUT);
TCCR0=(1<<WGM01)|(1<<WGM00)|(1<<CS01)|(1<<COM01);
OCR0=duty_cycle*2.55;
TCNT0=0;
}


