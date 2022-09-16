/*
 * dc_motor.c
 *
 *  Created on: Oct 9, 2021
 *      Author: DELL
 */
#include"dc_motor.h"
#include"commonmacros.h"
#include"GPIO.h"
#include"pwm_Driver.h"
void DcMotor_Init(void){
	GPIO_setupPinDirection(DC_MOTOR_PORT_ID,IN1,PIN_OUTPUT);
	GPIO_setupPinDirection(DC_MOTOR_PORT_ID,IN2,PIN_OUTPUT);
	GPIO_writePin(DC_MOTOR_PORT_ID,IN1,LOGIC_LOW);
	GPIO_writePin(DC_MOTOR_PORT_ID,IN2,LOGIC_LOW);
}
void DcMotor_Rotate(DcMotor_State state,uint8 speed){
	if(state==1){
		GPIO_writePin(DC_MOTOR_PORT_ID,IN1,LOGIC_LOW);
		GPIO_writePin(DC_MOTOR_PORT_ID,IN2,LOGIC_HIGH);
	}
	else if(state==0){
		GPIO_writePin(DC_MOTOR_PORT_ID,IN1,LOGIC_LOW);
		GPIO_writePin(DC_MOTOR_PORT_ID,IN2,LOGIC_LOW);
	}
	else if(state==2){
		GPIO_writePin(DC_MOTOR_PORT_ID,IN1,LOGIC_HIGH);
		GPIO_writePin(DC_MOTOR_PORT_ID,IN2,LOGIC_LOW);
	}
	PWM_Timer0_START(speed);
}

