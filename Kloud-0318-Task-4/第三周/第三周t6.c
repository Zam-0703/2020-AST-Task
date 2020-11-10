#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,k,t=1;
	char s[1000],c;
	double num[1000]={0};
	gets(s);
	
	j=0;
	
	for(i=0;i<strlen(s);i++)
	{
		c=s[i];
		if(c>='0'&&c<='9')
		{
			num[j]=num[j]*10+(c-48);
			if((s[i+1]<'0'||s[i+1]>'9')&&(s[i+1]!='.'))
			{
				num[j]=num[j]/t;
				t=1;
				j++;
			}
		}
		if(s[i]=='.')
		{
			for(k=i+1;;k++)
			{
				t*=10;
				if(s[k+1]<'0'||s[k+1]>'9')
				break;
			}
		}
	}
	
	for(i=0;i<1000;i++)
	{
	    if(num[i]!='\0')
	    {
	    	printf("%lg ",num[i]);
		}
	}
	
}
