#include<lpc21xx.h>
#include "header.h"

#define sw1 ((IOPIN0>>14)&1)
#define sw2 ((IOPIN0>>15)&1)
#define sw3 ((IOPIN0>>16)&1)

unsigned int c=0;

main()
{
	lcd_init();

	while(1)
	{
		if(sw1==0)
		{
			lcd_cmd(0X01);
			lcd_cmd(0X80);
			while(sw1==0); 
			c++;
			lcd_data((c/10)+48);
			lcd_data((c%10)+48);	
		}
		else if(sw2==0)
		{
			lcd_cmd(0X01);
			lcd_cmd(0X80);
		 	while(sw2==0);
			c--;
			lcd_data((c/10)+48);
			lcd_data((c%10)+48);
		}
		else if(sw3==0)
		{
			lcd_cmd(0X01);
			lcd_cmd(0X80);                                          
		 	while(sw3==0);
			while(c)
			{
				lcd_data((c/10)+48);
				lcd_data((c%10)+48);
				delay_ms(200);
				c--;
				lcd_cmd(0X01);
			}
		}

	}
}

