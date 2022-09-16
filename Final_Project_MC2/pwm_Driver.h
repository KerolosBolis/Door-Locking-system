/*
 * pwm_Driver.h
 *
 *  Created on: Nov 4, 2021
 *      Author: DELL
 */

#ifndef PWM_DRIVER_H_
#define PWM_DRIVER_H_
#include"std_types.h"
#include"GPIO.h"
#define MAX_VALUE 255
/*typedef enum{
    NO_CLOCK,F_CPU_1,F_CPU_8,F_CPU_64,F_CPU_256,F_CPU_1024,F_CPU_FALLING,F_CPU_RISING
}Timer_PreScalar;
typedef enum{
	DISCONNECTED,RESERVED,NON_INVERTING,INVERTING
}Compare_Match;
typedef struct{
	Timer_PreScalar prescalar;
	Compare_Match match;
}PWM_configType;*/
void PWM_Timer0_START(uint8 duty_cycle);//,const PWM_configType *pwm_config_ptr);


#endif /* PWM_DRIVER_H_ */
