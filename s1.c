#include<lpc21xx.h>
#include "header.h"

main()
{
	T0PC=0;
	T0PR=15000000-1;
	T0TCR=1;
	while(T0TC<1);
	T0TCR=0;
}
