#include<lpc21xx.h>
#include "header.h"
#define LED 1<<17|1<<18|1<<19
main()
{	int i=0;
 	IODIR0=LED;
	IOSET0=LED;

	while(i<8)
	{
	 for(i=0;i<=7;i++)
	 {
	  IOCLR0=i<<17;
	  delay_ms(300);
	  IOSET0=i<<17;
	  delay_ms(300);
	 }
	}
}
