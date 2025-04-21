#include<lpc21xx.h>
#include"header.h"

main()
{
	unsigned int i=0;
	//unsigned int add=0X80;
 	lcd_init();
	while(1)
	{
		/*for(i=0;i<16;i++)
		{
		 	lcd_cmd(0X80+i);
			lcd_data('A');
			delay_ms(200);
			lcd_cmd(0X01);	
		}*/


		lcd_cmd(0X80+i);
		lcd_data('A');
		delay_ms(200);
	   	i++;
		if(i==16)
			i=0;
		
		lcd_cmd(0X01);
	}
}
