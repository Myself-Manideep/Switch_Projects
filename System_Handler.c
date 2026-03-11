
#include "..\..\Lib\Delay\Delay.h"
#include "System_Handler.h"

void main()
{
	while(1)
	{
		unsigned int i;
		
		for(i = 0;  i<=255; i++)
		{
			LED = i;
			Delay_1ms(500);
		}
	}
}