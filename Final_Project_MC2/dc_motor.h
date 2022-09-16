/*
 * dc_motor.h
 *
 *  Created on: Oct 9, 2021
 *      Author: DELL
 */

#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_
#include"std_types.h"
#define MAX_VALUE 255
#define IN1 PIN0_ID
#define IN2 PIN1_ID
#define DC_MOTOR_PORT_ID PORTB_ID
typedef enum{
	STOP,CLOCKWISE,ANTI_CLOCKWISE
}DcMotor_State;
void DcMotor_Init(void);
void DcMotor_Rotate(DcMotor_State state,uint8 speed);



#endif /* DC_MOTOR_H_ */
