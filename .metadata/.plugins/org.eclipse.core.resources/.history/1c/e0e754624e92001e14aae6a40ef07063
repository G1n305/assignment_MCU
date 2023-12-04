/*
 * global.h
 *
 *  Created on: Dec 4, 2023
 *      Author: ASUS
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "fsm_automatic.h"

extern int status1;
extern int status2;

#define red_green_Counter 300
#define red_yellow_Counter 200

#define INIT		        0
#define REDGREEN_VH			1
#define REDYELLOW_VH		2
#define REDGREEN_HV			3
#define REDYELLOW_HV		4
#define WAIT                5
#define MANUAL              6
#define MAN_RED             7
#define MAN_YELLOW          8
#define MAN_GREEN           9
extern int red;
extern int yellow;
extern int green;
extern int horizontal_number;
extern int vertical_number;
extern int index;
extern int led_buffer[4];
//void updateClockBuffer();
//void update7SEG (int index);
void countDown();
void setInitialValue(int horizontal, int vertical);
extern int red_duration_clone;
extern int yellow_duration_clone;
extern int green_duration_clone;
void setForHorizonLed(int red, int yellow, int green);
void setForVerticalLed(int red, int yellow, int green);
void setPedesLeds(int red, int green, int mixed);

#endif /* INC_GLOBAL_H_ */
