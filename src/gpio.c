#include <project.h>
/************************************************/
void Init_gpio(void)
{
	unsigned int tmprep;
	/*GPIOC_MODER PC8 PC9*/
	tmprep = read_reg(GPIOC_MODER, ~(0x0fu << 16));
	tmprep = tmprep | (0x05u << 16);
	write_reg(GPIOC_MODER, tmprep);
	
	/*GPIOA_MODER PA0*/
	tmprep = read_reg(GPIOA_MODER, ~(0x02u << 0));
	tmprep = tmprep | (0x00u << 0);
	write_reg(GPIOA_MODER, tmprep);
	
}
void Turn_on(unsigned int pin)
{
	write_reg(GPIOC_BSRR, (1 << pin));
}
void Turn_off(unsigned int pin)
{
	write_reg(GPIOC_BSRR, (1 << (pin + 16)));
}