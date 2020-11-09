#include<stdio.h>
#include<string.h>
int main()
{
	char v[100];
	scanf("%s",v);
	double a[100];
	int i=0,cnt=0,k=0;
	int flag=1;
	double b=0.0;
	for(i=0;i<=strlen(v)-1;i++)
	{
		if(((v[i]>='0')&&(v[i]<='9'))&&(flag==1))
		{
			b=b*10+v[i]-'0';
		}
		if(v[i]=='.')
		{
			flag=0;
			continue;
		}
		if(((v[i]>='0')&&(v[i]<='9'))&&(flag==0))
		{
			b=b*10+v[i]-'0';
			cnt++;
		}
		if(((v[i]>='0')&&(v[i]<='9'))&&((v[i+1]<'0')||(v[i+1]>'9'))&&(v[i+1]!='.'))
		{
			for(cnt;cnt>0;cnt--)
				{
					b*=0.1;
				}
			cnt=0;
			a[k]=b;
			flag=1;
			k++;
			b=0;
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%lf ",a[i]);
	}
	return 0;
}
