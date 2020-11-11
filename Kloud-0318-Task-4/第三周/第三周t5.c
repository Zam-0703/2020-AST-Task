#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,n;
	char s[1000],c;
	int num[1000]={0};
	gets(s);
	
	j=0;
	
	for(i=0;i<strlen(s);i++)
	{
		c=s[i];
		if(c>='0'&&c<='9')
		{
			num[j]=num[j]*10+(c-48);
			if(s[i+1]<'0'||s[i+1]>'9')
			{
				j++;
			}
		}
	}
	n=i;
	for(i=0;i<=n;i++)
	{
	    if(num[i]!=0)
	    {
	    	printf("%d ",num[i]);
		}
	}
	
}
