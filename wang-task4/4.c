#include<stdio.h>
int main()
{
	int i,k;
	double s=0;
	scanf("%d",&k);
	for(i=1;;i++)
	{
		s+=1.0/i;
		if(s>k) 
		break;
	}
	printf("%d",i); 

}
