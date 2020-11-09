#include<stdio.h>
void sum(int a,int b,int*p);
int main()
{
	int a,b;
	int *p;
	int s=0;
	p=&s;
	scanf("%d %d",&a,&b);
	sum(a,b,&s);
	printf("%d",s);
	return 0;
}
void sum(int a,int b,int*p)
{
	*p=a+b;
}
