/*
 * time_set.c
 *
 *  Created on: Nov 30, 2024
 *      Author: Admin
 */
#include "time_set.h"


int timer_counter[NUM_TIMER];
int timer_flag[NUM_TIMER];

void setTimer(int index, int duration){
	timer_flag[index] = 0;
	timer_counter[index] = duration / 10;
}
void isTimerExpired(){

}
void runTimer(){
	for(int i = 0; i < NUM_TIMER; i++){
		if(timer_counter[i] <= 0){
			timer_flag[i] = 1;
		}
		else{
			timer_counter[i] --;
		}
	}
}

