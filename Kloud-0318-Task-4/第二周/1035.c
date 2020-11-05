#include<stdio.h>
int main()
{
	int k,n=1;
	double S=0.0;
	
	scanf("%d",&k);
	
	while(S<=(double)k)
	{
		S+=(double)(1.0/n);
		n++;
	}
	
	printf("%d",n-1);
}
