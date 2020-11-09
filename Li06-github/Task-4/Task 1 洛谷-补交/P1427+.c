#include<stdio.h>
int change (int a[],int i);
int main()
{
	int a[100];
	int i,b;
	for(i=0;i<=100;i++)
	{
		scanf("%d",&b);
		a[i]=b;
		if(a[i]==0){
		i-=1;
		break;
		}
	}
	change(a, i);
	return 0;
 } 
int change (int a[],int i)
{
	printf("%d ",a[i]);
	if(i<=0)
	return 0;
	else
	return change(a,i-1);
}
