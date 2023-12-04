/*
 * global.c
 *
 *  Created on: Dec 4, 2023
 *      Author: ASUS
 */

#include "main.h"
#include "global.h"
int status1 = 0;
int led_buffer [4];
int index = 0;
/*void display7SEG(int num)
     {
     	switch (num) {
     		case 0:
     			HAL_GPIO_WritePin(GPIOB, seg_a_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_b_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_c_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_d_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_e_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_f_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_g_Pin, SET);
     			break;
     		case 1:
     			HAL_GPIO_WritePin(GPIOB, seg_a_Pin, SET);
     			HAL_GPIO_WritePin(GPIOB, seg_b_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_c_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_d_Pin, SET);
     		    HAL_GPIO_WritePin(GPIOB, seg_e_Pin, SET);
     			HAL_GPIO_WritePin(GPIOB, seg_f_Pin, SET);
     			HAL_GPIO_WritePin(GPIOB, seg_g_Pin, SET);
     			break;
     		case 2:
     			HAL_GPIO_WritePin(GPIOB, seg_a_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_b_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_c_Pin, SET);
     			HAL_GPIO_WritePin(GPIOB, seg_d_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_e_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_f_Pin, SET);
     			HAL_GPIO_WritePin(GPIOB, seg_g_Pin, RESET);
     			break;
     		case 3:
     			HAL_GPIO_WritePin(GPIOB, seg_a_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_b_Pin, RESET);
     		    HAL_GPIO_WritePin(GPIOB, seg_c_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_d_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_e_Pin, SET);
     			HAL_GPIO_WritePin(GPIOB, seg_f_Pin, SET);
     			HAL_GPIO_WritePin(GPIOB, seg_g_Pin, RESET);
     			break;
     		case 4:
     		   	HAL_GPIO_WritePin(GPIOB, seg_a_Pin, SET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_b_Pin, RESET);
     		    HAL_GPIO_WritePin(GPIOB, seg_c_Pin, RESET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_d_Pin, SET);
     		    HAL_GPIO_WritePin(GPIOB, seg_e_Pin, SET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_f_Pin, RESET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_g_Pin, RESET);
     		   	break;
     		case 5:
     		   	HAL_GPIO_WritePin(GPIOB, seg_a_Pin, RESET);
     		    HAL_GPIO_WritePin(GPIOB, seg_b_Pin, SET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_c_Pin, RESET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_d_Pin, RESET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_e_Pin, SET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_f_Pin, RESET);
     		    HAL_GPIO_WritePin(GPIOB, seg_g_Pin, RESET);
     		   	break;
     		case 6:
     			HAL_GPIO_WritePin(GPIOB, seg_a_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_b_Pin, SET);
     			HAL_GPIO_WritePin(GPIOB, seg_c_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_d_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_e_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_f_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_g_Pin, RESET);
     			break;
     		case 7:
     			HAL_GPIO_WritePin(GPIOB, seg_a_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_b_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_c_Pin, RESET);
     			HAL_GPIO_WritePin(GPIOB, seg_d_Pin, SET);
     			HAL_GPIO_WritePin(GPIOB, seg_e_Pin, SET);
     			HAL_GPIO_WritePin(GPIOB, seg_f_Pin, SET);
     			HAL_GPIO_WritePin(GPIOB, seg_g_Pin, SET);
     			break;
     		case 8:
     		   	HAL_GPIO_WritePin(GPIOB, seg_a_Pin, RESET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_b_Pin, RESET);
     		    HAL_GPIO_WritePin(GPIOB, seg_c_Pin, RESET);
     		    HAL_GPIO_WritePin(GPIOB, seg_d_Pin, RESET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_e_Pin, RESET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_f_Pin, RESET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_g_Pin, RESET);
     		   	break;
     		case 9:
     			HAL_GPIO_WritePin(GPIOB, seg_a_Pin, RESET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_b_Pin, RESET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_c_Pin, RESET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_d_Pin, RESET);
     		    HAL_GPIO_WritePin(GPIOB, seg_e_Pin, SET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_f_Pin, RESET);
     		   	HAL_GPIO_WritePin(GPIOB, seg_g_Pin, RESET);
     			break;
     		default:
     			break;
     	}
     }
  void update7SEG (int index) {
  	  display7SEG(led_buffer[index]);
  	  switch (index){
  	  case 0:
  		  HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOA, EN1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOA, EN2_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOA, EN3_Pin, SET);
  		  break;
  	  case 1:
  		  HAL_GPIO_WritePin(GPIOA, EN0_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOA, EN2_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOA, EN3_Pin, SET);
  	  	  break;
  	  case 2:
  		  HAL_GPIO_WritePin(GPIOA, EN0_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOA, EN1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOA, EN3_Pin, SET);
  	  	  break;
  	  case 3:
  		  HAL_GPIO_WritePin(GPIOA, EN0_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOA, EN1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOA, EN2_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
  	  	  break;
  	  default:
  	  	  break;
  	  }
  };
  void updateClockBuffer(){
      led_buffer[0] = horizontal_number / 10;
      led_buffer[1] = horizontal_number % 10;
      led_buffer[2] = vertical_number / 10;
      led_buffer[3] = vertical_number % 10;
  }*/

void setInitialValue(int vertical, int horizontal){
	vertical_number = vertical;
	horizontal_number = horizontal;
}
void countDown(){
	horizontal_number--;
	vertical_number--;
}
void setForVerticalLed(int red, int yellow, int green){
	if(red == SET){
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
		}
		if(green == SET){
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
		}
		if(yellow == SET){
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
		}
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
}
void setForHorizonLed(int red, int yellow, int green){
	if(red == SET){
			HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
			HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, RESET);
		}
		if(green == SET){
			HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
			HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, SET);
		}
		if(yellow == SET){
			HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
			HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, SET);
		}
		HAL_GPIO_WritePin(D2_GPIO_Port, D4_Pin, RESET);
	    HAL_GPIO_WritePin(D3_GPIO_Port, D5_Pin, RESET);
}
void setPedesLeds(int red, int green, int mixed){
	if(red == SET){
		HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, SET);
		HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, RESET);
	}
	if(green == SET){
		HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, RESET);
		HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, SET);
	}
	if(mixed == SET){
		HAL_GPIO_WritePin(D2_GPIO_Port, D6_Pin, SET);
		HAL_GPIO_WritePin(D3_GPIO_Port, D7_Pin, SET);
	}
	HAL_GPIO_WritePin(D2_GPIO_Port, D6_Pin, RESET);
	HAL_GPIO_WritePin(D3_GPIO_Port, D7_Pin, RESET);
}

