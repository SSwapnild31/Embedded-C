#include<lpc21xx.h>
#include "header.h"

main()
{
	int i=0;
	IODIR0=0XFF;
	IOSET0=0XFF;
	while(1)
	{
		for(i=1;i<8;i=i+2)
		{
			IOCLR0=1<<i;
			delay_ms(200);
			IOSET0=1<<i;
			delay_ms(200);
		}
		
	}
}
