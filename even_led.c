#include<lpc21xx.h>
#include "header.h"

main()
{
 int i,j=0;
 IODIR0=0XFF;
 IOSET0=0XFF;
 //delay_ms(250);
 while(1)
 {
  for(i=j;i<=7;i=i+2)
  {
   	IOCLR0=1<<i;
	delay_ms(250);
	IOSET0=1<<i;
	delay_ms(250);
  }
  j=!j;
 }
}
