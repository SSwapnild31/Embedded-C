#include<lpc21xx.h>
#include "header.h"
#define LED 1<<17|1<<18|1<<19
main()
{
	int i=0;
	IODIR0=LED;
	IOSET0=LED;

	 for(i=0;i<8;i++)
	 {
	  	IOCLR0=i<<17;
		delay_ms(350);
		IOSET0=i<<17;
		delay_ms(350);
	 }

	 for(i=7;i>0;i--)
	 {
	  	IOCLR0=i<<17;
		delay_ms(350);
		IOSET0=i<<17;
		delay_ms(350);
	 }
}
