#include<stdio.h>
int main()
{
	int n,i,max,min;
	int a[100];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	min=max=a[0];
	
	for(i=0;i<n;i++)
	{
		
		if(a[i]<=min)
		{
			min=a[i];
		}
	    if(a[i]>=max)
		{
			max=a[i];
		}
	}
	
	
	printf("%d",(max-min));
}
