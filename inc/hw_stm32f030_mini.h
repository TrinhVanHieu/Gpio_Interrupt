
#ifndef __HW_STM32F030_MINI_H__
#define __HW_STM32F030_MINI_H__


#define write_reg(addr, value)    				*((unsigned long int *)(addr)) = value
#define read_reg(addr, mask)      				*((unsigned long int *)(addr)) & (mask)

/*CLOCK*/
#define BASE_ADD_CLOCK							0x40021000u
#define RCC_AHBENR								(BASE_ADD_CLOCK + 0x14u)

/*GPIOC*/
#define BASE_ADD_GPIOC							0x48000800u	
#define GPIOC_MODER								(BASE_ADD_GPIOC + 0x00u)
#define GPIOC_ODR								(BASE_ADD_GPIOC + 0x14u)
#define GPIOC_BSRR								(BASE_ADD_GPIOC + 0x18u)

#define GPIO_INPUT								0x00u
#define GPIO_OUTPUT								0x01u
#define GPIO_ALT								0x02u
#define GPIO_ANALOG								0x03u

/*LD3_PC9 LD4_PC8*/
#define LD3_PIN									9
#define LD4_PIN									8

/*GPIOA*/
#define BASE_ADD_GPIOA							0x48000000u	
#define GPIOA_MODER								(BASE_ADD_GPIOA + 0x00u)

/*Button PA0*/
#define BUTTON_PIN								0

/*SYSCFG*/	
#define BASE_ADD_SYSCFG							0x40010000u	
#define SYSCFG_EXTICR1							(BASE_ADD_SYSCFG + 0x08u) 

/*EXTI*/
#define BASE_ADD_EXTI							0x40010400u
#define EXTI_IMR								(BASE_ADD_EXTI + 0x00u)
#define EXTI_RTSR								(BASE_ADD_EXTI + 0x08u)
#define EXTI_PR									(BASE_ADD_EXTI + 0x14u)

/*NVIC*/
#define NVIC_ISER								0xE000E100u
#define NVIC_ICER								0xE000E180u
#define NVIC_ISPR								0xE000E200u
#define NVIC_ICPR								0xE000E280u
#define NVIC_PRI1								(0xE000E400u + 0x04u)

/* end file */
#endif /* __HW_STM32F030_MINI_H__ */

