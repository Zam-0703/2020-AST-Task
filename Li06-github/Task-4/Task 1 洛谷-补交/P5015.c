#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	gets(a);
	int i;
	int cnt=0;
	for(i=0;i<=strlen(a)-1;i++)
	{
		if(a[i]!=' ')
		{
//			printf("%c",a[i]);
			cnt++;
		}
		
	}
	printf("%d",cnt);
	return 0;
 } 
