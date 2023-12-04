/*
 * software_timer.h
 *
 *  Created on: Dec 4, 2023
 *      Author: ASUS
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag0;
extern int timer_flag1;
extern int timer_flag2;
extern int timer_flag3;
void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
