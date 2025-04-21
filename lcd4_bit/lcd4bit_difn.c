#include<lpc21xx.h>
#include "header.h"

void lcd_data(unsigned char data)
{
	//higher nibble
	unsigned int temp;
	IOCLR1=0XFE<<16;
	temp=(data&0XF0)<<16;
	IOSET1=temp;
	
	IOSET1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19;
	
	//lower nibble
	IOCLR1=0XFE<<16;
	temp=(data&0X0F)<<20;
	IOSET1=temp;
	
	IOSET1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19; 	
}

void lcd_cmd(unsigned char cmd)
{
	//higher nibble
	unsigned int temp;
	IOCLR1=0XFE<<16;
	temp=(cmd&0XF0)<<16;
	
	IOSET1=temp;
	IOCLR1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19;
	
	//lower nibble
	IOCLR1=0XFE<<16;
	temp=(cmd&0X0F)<<20;
	
	IOSET1=temp;
	IOCLR1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19;	
}

void lcd_init()
{
 IODIR1=0XFE<<16;
 IOCLR1=1<<19;
 lcd_cmd(0X03);
 lcd_cmd(0X02);
 lcd_cmd(0X28);
 lcd_cmd(0X0e);
 lcd_cmd(0X01);
}
