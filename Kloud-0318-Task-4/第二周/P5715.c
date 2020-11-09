#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		d=a,a=b,b=d;
		if(c<a)
	    {
		printf("%d %d %d",c,a,b);
	    }
	    else if(c<b)
		 {
		 	printf("%d %d %d",a,c,b);
		 }
	    else
	    {
	    	printf("%d %d %d",a,b,c);
		}
	}
	else if(c<a)
	{
		printf("%d %d %d",c,a,b);
	}
	    else if(c<b)
		 {
		 	printf("%d %d %d",a,c,b);
		 }
	    else
	    {
	    	printf("%d %d %d",a,b,c);
		}
}
