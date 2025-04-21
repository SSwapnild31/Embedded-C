#include<lpc21xx.h>
#include "header.h"

maqin()
{
	char ch='A';
 	lcd_init();
	while(1)
	{
	  lcd_cmd(0X80);
	  lcd_data(ch++);
	}

}