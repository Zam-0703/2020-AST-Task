#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int n[100];
	scanf("%s",a);
	int i,b,k;
	b=0;
	k=0;
	for(i=0;i<=strlen(a)-1;i++)
	{
		if((a[i]>='0')&&(a[i]<='9'))
		{
			b=b*10+a[i]-'0';
			if((a[i+1]<'0')||(a[i+1]>'9'))
			{
				n[k]=b;
				k++;
				b=0;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",n[i]);
	}
	return 0;
}
