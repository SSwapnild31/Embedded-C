#include<LPC21XX.H>

#define SW1 ((IOPIN0>>14)&1)
#define SW2 ((IOPIN0>>15)&1)

main()
{
	IODIR0=1<<17;
	IOSET0=1<<17;

	while(1)
	{
		if(SW1==0|SW2==0)
		{
			while(SW1==0|SW2==0);
			if(IOSET0>>17)
				IOCLR0=1<<17;
			else
				IOSET0=1<<17;
		}
	}
}
