
#include "project.h"

void delay(unsigned int timeout)
{
   unsigned int t1, t2;
    for (t1 = 0; t1 < timeout; t1++)
    {
        for (t2 = 0; t2 < 0xFFF; t2++)
        {
          asm(" nop");
        }
    }
}


void main(void)
{
	/*Init_clock*/
	Enable_clk();
	/*Init_gpio_c*/
	Init_gpio();
	/*Init_interrupt*/
	Init_interrupt();
  while(1)
  {
	Turn_on(LD4_PIN);
	delay(0x0f);
	Turn_off(LD4_PIN);
	delay(0x0f);
  }
}



