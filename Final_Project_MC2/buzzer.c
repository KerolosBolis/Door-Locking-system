/*
 * buzzer.c
 *
 *  Created on: Nov 2, 2021
 *      Author: DELL
 */
#include"GPIO.h"
#include <avr/io.h>
#include "commonmacros.h"
#include "buzzer.h"
void buzzer_init(void){
	GPIO_setupPinDirection(BUZZER_PORT_ID,BUZZER_PIN_ID,PIN_OUTPUT);
}
void buzzer_ON(void){
	GPIO_writePin(BUZZER_PORT_ID,BUZZER_PIN_ID,LOGIC_HIGH);
}
void buzzer_OFF(void){
	GPIO_writePin(BUZZER_PORT_ID,BUZZER_PIN_ID,LOGIC_LOW);
}


