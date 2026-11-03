/*
 * main.h
 *
 *  Created on: Nov 2, 2026
 *      Author: Dixit Chivukula
 */

#ifndef MAIN_H_
#define MAIN_H_

//Each task should have respective stack to store its data, before switching to next task
#define MAX_NUM_TASK         4
#define TASK_STACK_SIZE      1024U
#define SCHED_STACK_SIZE     1024U

#define SRAM_START           0x20000000
#define SRAM_SIZE            ((128) * (1024))

#define SRAM_END             ((SRAM_START) + (SRAM_SIZE))

#define T1_STACK_START       SRAM_END
#define T2_STACK_START       ((SRAM_END) - (TASK_STACK_SIZE))
#define T3_STACK_START       ((SRAM_END) - (2 * TASK_STACK_SIZE))
#define T4_STACK_START       ((SRAM_END) - (3 * TASK_STACK_SIZE))
#define SCHED_STACK_START    ((SRAM_END) - (4 * TASK_STACK_SIZE))

#define TICK_HZ              1000U
#define HSI_CLK              16000000U
#define SYSTICK_TIMER_CLK    HSI_CLK

#define DUMMY_XPSR           0x01000000U

#endif /* MAIN_H_ */
