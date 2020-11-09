#include<stdio.h>
int main()
{
	int y,m,d;
	scanf("%d %d",&y,&m);
	if(y%400==0||(y%4==0&&y%100!=0))
		{
		if(m==2)
		{
		printf("29");
		}
		else
		{
			if(m==4||m==6||m==9||m==11)
			{
				printf("30");
			}
			else
			{
				if(m!=2)
			printf("31"); 
			}
		}
	}
		
	else
{
		if(m==2)
		{
		printf("28");
		}
		
	    if(m==4||m==6||m==9||m==11)
			{
				printf("30");
		}
		else
			{
				if(m!=2)
				
			printf("31"); 
			}
 } } 
 
