#include <stdio.h>

char * my_strchr(char *,char);
void main() 
{
	char s[]="vector india pvt ltd";
	
	char *p,*q;
	p=s;
	
	int c=1;
	while(q=my_strchr(p,' ') && c!=2)
	{
		p=q+1;
		c++;
	}
	printf("%s\n",p);
}

char * my_strchr(char *p,char ch)
{
	for(int i=0;p[i];i++)
	{
		if(p[i]==ch)
			return &p[i];
	}
	return 0;
}
