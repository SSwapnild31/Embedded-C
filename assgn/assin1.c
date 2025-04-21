#include<lpc21xx.h>
#include"header.h"
#define SW ((IOPIN0>>14)&1)
#define SH (1<<17|1<<18|1<<19)

int c=0;
main()
{
 IODIR0=SH;
 IOSET0=SH;
 while(1)
 {
  if(SW==0)
  {
   while(SW==0);
   c++;

   IOCLR0=c<<17;
   delay_ms(250);
   IOSET0=c<<17;
  }
  if(c==7)
  	c=0;
 }
}
