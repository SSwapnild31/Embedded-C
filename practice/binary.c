#include<lpc21xx.h>
#include "header.h"

//#define led 1<<17|1<<18|1<<19
#define led 0XFF;

main()
{
	int i;
	IODIR0=led;
	IOSET0=led;
	while(1)
	{
		for(i=1;i<8;i++)
		{
			IOCLR0=i;
			delay_ms(500);
			IOSET0=i;
			delay_ms(500);
		}
	}
}
