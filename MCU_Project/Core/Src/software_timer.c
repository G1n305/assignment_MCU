/*
 * software_timer.c
 *
 *  Created on: Dec 4, 2023
 *      Author: ASUS
 */

#ifndef SRC_SOFTWARE_TIMER_C_
#define SRC_SOFTWARE_TIMER_C_

#include "software_timer.h"
#include "software_timer.h"

int counter0;
int counter1;
int counter2;
int counter3;

int timer_flag0;
int timer_flag1;
int timer_flag2;
int timer_flag3;


void setTimer0(int duration){
	counter0 = duration;
	timer_flag0 = 0;
}
void setTimer1(int duration){
	counter1 = duration;
	timer_flag1 = 0;
}
void setTimer2(int duration){
	counter2 = duration;
	timer_flag2 = 0;
}
void setTimer3(int duration){
	counter3 = duration;
	timer_flag3 = 0;
}
void timerRun(){
	if(counter0 > 0){
		counter0--;
		if(counter0 <= 0) timer_flag0 = 1;
	}
	if(counter1 > 0){
			counter1--;
			if(counter1 <= 0) timer_flag1 = 1;
		}
	if(counter2 > 0){
			counter2--;
			if(counter2 <= 0) timer_flag2 = 1;
		}
	if(counter3 > 0){
			counter0--;
			if(counter3 <= 0) timer_flag3 = 1;
		}


}


#endif /* SRC_SOFTWARE_TIMER_C_ */
