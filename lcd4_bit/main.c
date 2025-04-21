#include<lpc21xx.h>
#include "header.h"

main()
{
	lcd_init();
	lcd_cmd(0X80);
	lcd_data('A');	
}

