#include<stdio.h>
int main()
{   long long int i,b;
	int a;
	scanf("%lld",&i);
	for(;b!=0;)
	{
		a=i%10;b=i/10;
		printf("%lld",a);
		i=b;
		
		
	}
	return 0;
} 
