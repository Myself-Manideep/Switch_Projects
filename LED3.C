
#include "..\..\Lib\Delay\Delay.h"
#include "LED3.h"
void main()
{
	
	while(1)
	{
		LED1 = 1;
		LED2 = 0;
		LED3 = 0;
		Delay_1ms(1000);
		
		LED1 = 0;
		LED2 = 1;
		LED3 = 0;
		Delay_1ms(1000);
		
		LED1 = 0;
		LED2 = 0;
		LED3 = 1;
		Delay_1ms(1000);
	}
}

		
		