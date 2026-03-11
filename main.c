

#include "..\..\Lib\Delay\Delay.h"
#include "main.h"
void main()
{
	while(1)
	{
		LED = 1;
		Delay_1ms(1000);
		
		LED = 0;
		Delay_1ms(1000);
	}
}
