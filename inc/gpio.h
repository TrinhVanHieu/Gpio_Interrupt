#ifndef _GPIO_H_H
#define _GPIO_H_H
#include <hw_stm32f030_mini.h>
/**************************************/
void Init_gpio(void);
void Turn_on(unsigned int pin);
void Turn_off(unsigned int pin);
/**************************************/
#endif