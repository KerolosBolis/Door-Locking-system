/*
 * buzzer.h
 *
 *  Created on: Nov 2, 2021
 *      Author: DELL
 */

#ifndef BUZZER_H_
#define BUZZER_H_
#include"std_types.h"
#define BUZZER_PIN_ID PIN5_ID
#define BUZZER_PORT_ID PORTD_ID
void buzzer_init(void);
void buzzer_ON(void);
void buzzer_OFF(void);


#endif /* BUZZER_H_ */
