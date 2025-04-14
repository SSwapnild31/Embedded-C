#include<lpc21xx.h>
#include"header.h"
main()
{
int i;
IODIR0=0XFF;
IOSET0=0XFF;
delay_sec(1);
while(1)
{
for( i=0;i<8;i++)
{
IOCLR0=1<<i;
delay_sec(1);
IOSET0=1<<i;
delay_sec(1);
}
}
}
