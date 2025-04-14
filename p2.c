#include<lpc21xx.h>
#include "header.h"

main()
{
 IODIR0=0XFF;
 IOSET0=0XFF;
 IOCLR0=0X13;
}