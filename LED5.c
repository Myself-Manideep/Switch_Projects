
#include "..\..\Lib\Delay\Delay.h"
#include "LED5.h"

void main()
{
  while(1)
	{
		LED1 = 1;
		LED2 = 0;
		LED3 = 0;
		LED4 = 0;
		LED5 = 0;
		Delay_1ms(1000);
		
		LED1 = 0;
		LED2 = 1;
		LED3 = 0;
		LED4 = 0;
		LED5 = 0;
		Delay_1ms(1000);
		
		LED1 = 0;
		LED2 = 0;
		LED3 = 1;
		LED4 = 0;
		LED5 = 0;
		Delay_1ms(1000);
		
		LED1 = 0;
		LED2 = 0;
		LED3 = 0;
		LED4 = 1;
		LED5 = 0;
		Delay_1ms(1000);
		
		LED1 = 0;
		LED2 = 0;
		LED3 = 0;
		LED4 = 0;
		LED5 = 1;
		Delay_1ms(1000);
		
	}
}

		