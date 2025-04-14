#include<lpc21xx.h>
#include "header.h"

main()
{
	IODIR0=1;
	IOSET0=1;
	delay_sec(1);
	IOCLR0=1;
	delay_sec(1);
}
