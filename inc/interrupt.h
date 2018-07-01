#ifndef _INTERRUPT_H_
#define _INTERRUPT_H_
#include <hw_stm32f030_mini.h>
/*************************/
void Reserved_IRQHandler(void);
void NMI_Handler(void);
void HardFault_Handler(void);
void SVC_Handler(void);
void PendSV_Handler(void);
void SysTick_Handler(void);
void Init_interrupt(void);
void EXTI0_1_IRQHandler(void);
/*************************/
#endif