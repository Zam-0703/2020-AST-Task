#include<stdio.h>
int change(long long x);
int main()
{
	long long x;
	scanf("%llu",&x);
	change(x);
	return 0;
 } 
 
 int change (long long x)
 {
 	int a;
 	a=x%10;
	printf("%llu",a);
	if(x/10!=0)
	return change(x/10);
	else
	return 0;
 }
