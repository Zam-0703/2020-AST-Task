#include<stdio.h>


int main()
{
	char c;
	c=getchar();
	if(c!='\n')
	{
		main();
		printf("%c",c);
	}
	
 } 
