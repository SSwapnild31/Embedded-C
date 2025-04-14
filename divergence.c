#include<lpc21xx.h>
#include"header.h"

main()
{
 int i,j;
 IODIR0=0XFF;
 IOSET0=0XFF;
 while(1)
 {
  for(i=3,j=4;j<8;i--,j++)
  {
   IOCLR0=1<<i;
   IOCLR0=1<<j;
   delay_ms(250);
   IOSET0=1<<i;
   IOSET0=1<<j;
   delay_ms(250);
  }
 }
}
