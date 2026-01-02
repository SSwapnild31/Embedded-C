#include<lpc21xx.h>
#include "header.h"

main()
{
 IODIR0=1<<17;
 while(1){
   if(((IOPIN0>>14)&1)==0)
  	IOCLR0=1<<17;
  else
  	IOSET0=1<<17;
 }
}

