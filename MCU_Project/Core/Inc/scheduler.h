/*
 * scheduler.h
 *
 *  Created on: Dec 4, 2023
 *      Author: ASUS
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_
#include <stdint.h>
#define SCH_MAX_TASKS 40
typedef struct{
	void (*pTask)(void);
	uint32_t Delay;
	uint32_t Period;
	uint8_t RunMe;
	uint32_t TaskID;
} sTask;
sTask SCH_tasks_G[SCH_MAX_TASKS];
uint32_t newTaskID;
uint32_t count_SCH_Update;
uint32_t NO_TASK_ID;
void SCH_Init(void);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
uint32_t SCH_Add_Task(void(*pFunction)(), uint32_t DELAY, uint32_t PERIOD);
uint8_t SCH_Delete_Task(uint32_t TASK_INDEX);
uint32_t Get_New_Task_ID(void);


#endif /* INC_SCHEDULER_H_ */
