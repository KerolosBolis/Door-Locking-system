/*
 * timer0.h
 *
 *  Created on: Oct 24, 2021
 *      Author: DELL
 */

#ifndef TIMER0_H_
#define TIMER0_H_
#include"std_types.h"
typedef enum{
	NORMAL_MODE,COMPARE_MATCH
}TIMER0_Mode;
typedef enum{
    NO_CLOCK,F_CPU_1,F_CPU_8,F_CPU_64,F_CPU_256,F_CPU_1024,EXTERNAL_ON_FALLING,
	EXTERNAL_ON_RISING
}TIMER0_PreScalar;
typedef enum{
	NORMAL_MODE_OCO_DISCONNECTED,TOGGLE,CLEAR,SET
}CTC_Mode;

typedef struct{
	TIMER0_Mode mode;
	TIMER0_PreScalar prescalar;
	uint8 initial_value;
	uint8 compare_value;
	uint8 CTC_Mode;
}TIMER0_config_Type;
void Timer0_init(const TIMER0_config_Type *config_type);
void Timer0_Deinit(void);
void Timer0_setCallBack(void(*a_ptr)(void));

#endif /* TIMER0_H_ */
