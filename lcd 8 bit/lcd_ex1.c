#include<lpc21xx.h>
#include"header.h"

main()
{
	lcd_init();
	lcd_cmd(0x80);
	lcd_data('S');
	lcd_data('h');
	lcd_data('y');
	lcd_data('a');
	lcd_data('m');
}
