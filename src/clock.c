#include <project.h>
/*********************************************************************************/
void Init_clk(void)
{

}
void Enable_clk(void)
{
	unsigned int tmprep;
	/*GPIOC*/
	tmprep = read_reg(RCC_AHBENR, ~(0x01u <<19));
	tmprep = tmprep | (0x01u << 19);
	write_reg(RCC_AHBENR, tmprep);
	
	/*GPIOA*/
	tmprep = read_reg(RCC_AHBENR, ~(0x01u <<17));
	tmprep = tmprep | (0x01u << 17);
	write_reg(RCC_AHBENR, tmprep);
}