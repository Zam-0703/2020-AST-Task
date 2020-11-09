#include<stdio.h>

int main()
{
	char ch;
	scanf("%c",&ch);
	(ch>='a'&&ch<='z')&&(ch+='A'-'a');
	printf("%c",ch);
	return 0;
}
 
