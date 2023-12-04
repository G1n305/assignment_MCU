/*
 * fsm_automatic.c
 *
 *  Created on: Dec 4, 2023
 *      Author: ASUS
 */

#include "fsm_automatic.h"
#include "global.h"
#include "button.h"
int horizontal_number = 0;
int vertical_number = 0;
int red = 10;
int yellow = 2;
int green = 8;
void fsm_automatic(){
	switch(status1){
	case INIT:
		setTimer0(green * 100);
		setTimer1(100);

		setInitialValue(red , green);
		status1 = REDGREEN_VH;
	    break;
	case REDGREEN_VH:
		setForHorizonLed(SET, SET, RESET);
		setForVerticalLed(RESET, SET, SET);
		if(timer_flag0 == 1){
			setInitialValue(yellow , yellow);
			setTimer0(yellow * 100);
			status1 = REDYELLOW_VH;
		}
		if(timer_flag1 == 1){
			countDown();
			setTimer1(100);
		}
		if(timer_flag2 == 1){
		    updateClockBuffer();
			update7SEG(index++);
			if(index >= 4) index = 0;
			setTimer2(10);
	   }

		break;
	case REDYELLOW_VH:
		setForHorizonLed(SET, RESET, SET);
		setForVerticalLed(RESET, SET, SET);
		if(timer_flag0 == 1){
			setInitialValue(green , red);
			setTimer0(green * 100);
			status1 = REDGREEN_HV;
			}
		if(timer_flag1 == 1){
			countDown();
			setTimer1(100);
		}
		if(timer_flag2 == 1){
				updateClockBuffer();
				update7SEG(index++);
				if(index >= 4) index = 0;
				setTimer2(10);
		}
        break;
	case REDGREEN_HV:
		setForHorizonLed(RESET, SET, SET);
	    setForVerticalLed(SET, SET, RESET);
	    if(timer_flag0 == 1){
	    	setInitialValue(yellow, yellow);
	    	setTimer0(yellow * 100);
	    	status1 = REDYELLOW_HV;
	    	}
	    if(timer_flag1 == 1){
	    	countDown();
	    	setTimer1(100);
	    }
	    if(timer_flag2 == 1){
	    		updateClockBuffer();
	    				update7SEG(index++);

	    				if(index >= 4) index = 0;
	    				setTimer2(10);
	    			}

	    break;
	case REDYELLOW_HV:
			setForHorizonLed(RESET, SET, SET);
			setForVerticalLed(SET, RESET, SET);
			if(timer_flag0 == 1){
				 setInitialValue(red, green);
				 setTimer0(green * 100);
				 status1 = REDGREEN_VH;
				 }
			 if(timer_flag1 == 1){
				  countDown();
				  setTimer1(100);
				 }
			 if(timer_flag2 == 1){
			 		updateClockBuffer();
			 				update7SEG(index++);
			 				if(index >= 4) index = 0;
			 				setTimer2(10);
			 	 }
			break;
	}
	if(isButtonPressed(1) == 1){
			 setForVerticalLed(SET,SET,SET);
			 setForHorizonLed(SET,SET, SET);
			 setTimer3(100);
			 status1 = MAN_RED;
	}
}


