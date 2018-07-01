#include<project.h>
/*************************/
unsigned int state_led = 1;
void Init_interrupt(void)
{
	unsigned int tmprep;
	/*EXTI0*/
	tmprep = read_reg(SYSCFG_EXTICR1, ~(0x0fu << 0));
	tmprep = tmprep | (0x00u << 0);
	write_reg(SYSCFG_EXTICR1, tmprep);
	
	/*EXTI_IMR*/
	tmprep = read_reg(EXTI_IMR, ~(0x01u << 0));
	tmprep = tmprep | (0x01u << 0);
	write_reg(EXTI_IMR, tmprep);
	
	/*EXTI_RTSR*/
	tmprep = read_reg(EXTI_RTSR, ~(0x01u << 0));
	tmprep = tmprep | (0x01u << 0);
	write_reg(EXTI_RTSR, tmprep);
	
	/*NVIC_ISER*/
	tmprep = read_reg(NVIC_ISER, ~(0x01u << 5));
	tmprep = tmprep | (0x01u << 5);
	write_reg(NVIC_ISER, tmprep);
	
	/*NVIC_PRI1*/
	tmprep = read_reg(NVIC_PRI1, ~(0xffu << 8));
	tmprep = tmprep | (0x01u << 14);
	write_reg(NVIC_PRI1, tmprep);
	
	/*enable global interrupt*/
	asm ("cpsie i");
}
/*************************/
void EXTI0_1_IRQHandler(void)
{
	unsigned int temp = read_reg(EXTI_PR, (0x01u << 0));
	if (temp)
	{
		if (state_led)
		{
			Turn_on(LD3_PIN); 
			state_led = 0;
		}
		else 
		{
			Turn_off(LD3_PIN); 
			state_led = 1;
		}
	}
	/*Xoa co*/
	write_reg(EXTI_PR, (0x01u << 0)); //xoa co EXTI0
	write_reg(NVIC_ICPR, (0x01u << 5)); //xoa co NVIC
}
void Reserved_IRQHandler(void)
{
  while(1)
  {
    /* nothing to be run here */
  }
}

void NMI_Handler(void)
{
  while(1)
  {
    /* nothing to be run here */
  }
}

void HardFault_Handler(void)
{
  while(1)
  {
    /* nothing to be run here */
  }
}

void SVC_Handler(void)
{
  while(1)
  {
    /* nothing to be run here */
  }
}

void PendSV_Handler(void)
{
  while(1)
  {
    /* nothing to be run here */
  }
}

void SysTick_Handler(void)
{
  while(1)
  {
    /* nothing to be run here */
  }
}
