/*
 * time_set.h
 *
 *  Created on: Nov 30, 2024
 *      Author: Admin
 */

#ifndef INC_TIME_SET_H_
#define INC_TIME_SET_H_

#include "main.h"

#define NUM_TIMER 4
extern int timer_flag[NUM_TIMER];
extern int timer_dura[NUM_TIMER];


void setTimer(int index, int dura);

void runTimer();

#endif /* INC_TIME_SET_H_ */
