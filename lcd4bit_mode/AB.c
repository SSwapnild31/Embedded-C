#include<lpc21xx.h>
#include "header.h"
main()
{	lcd_init();
	while(1)
	{	 
		lcd_cmd(0X80);	
		lcd_data('A');
		delay_ms(200);
		lcd_cmd(0x80);
		lcd_data('B');
		delay_ms(200);
		//lcd_cmd(0x01);
	}
}
