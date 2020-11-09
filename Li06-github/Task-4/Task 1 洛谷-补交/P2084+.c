#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	int n,i;
	scanf("%d %s",&n,a);
	printf("%c*%d^%d",a[0],n,(strlen(a)-1));
	for(i=1;i<=strlen(a)-1;i++)
	{
		if(a[i]!='0')
		printf("+%c*%d^%d",a[i],n,(strlen(a)-i-1));
		
	}
}
