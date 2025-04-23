#include<lpc21xx.h>
#include "header.h"

#define SW ((IOPIN0>>14)&1)
int c=0;

main()
{
 int i;
 IODIR0=1<<17;
 IOSET0=1<<17;
 while(1)
 {
  if(SW==0)
  {
   while(SW==0);
   c++;
   for(i=0;i<c;i++)
  {
   IOCLR0=1<<17;
   delay_ms(250);
   IOSET0=1<<17;
   delay_ms(250);
  }
  }
 }
}
