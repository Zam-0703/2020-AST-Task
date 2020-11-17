#include<stdio.h>

int main()
{
    long long x;
    int y=0;
    scanf("%lld",&x);
	for(;x>0;x=x/10) 
	{
		y=x%10;
	printf("%d",y);
	}
}
