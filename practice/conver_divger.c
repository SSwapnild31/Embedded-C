#include<lpc21xx.h>
#include "header.h"

main()
{
	int i,j;
	IODIR0=0XFF;
	IOSET0=0XFF;
	while(1)
	{
		for(i=0,j=7;i<=7;i++,j--)
		{
			IOCLR0=1<<i|1<<j;
			delay_ms(200);
			IOSET0=1<<i|1<<j;
			delay_ms(200);
		}
	}
}
