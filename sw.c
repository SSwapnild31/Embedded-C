#include<lpc21xx.h>
#include "header.h"
#define SW ((IOPIN0>>5)&1)
main()
{
 IODIR0=1;
 
 while(1)
 {
  if(SW==0)
  		IOCLR0=1;
  else
  		IOSET0=1;
 }
}
