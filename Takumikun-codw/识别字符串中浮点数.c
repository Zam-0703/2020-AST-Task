#include <stdio.h>
#include <stdlib.h>
#define N 40
#include <stdbool.h>

char ch[N];
double temp1,temp2,t=0.1,results[N];
int p=0;
bool check(int i)//检查ch[]第i位是否是数字字符
{
	return (ch[i]<='9'&&ch[i]>='0') ? true : false;
}
int pickUp(int i)//提取以i位为起始的数字，并返回数字末位的后一位
{
	temp1=0.0;
	temp2=0.0;
	t=1.0;
	while(check(i))
	{
		temp1=temp1*10.0+ ((int)ch[i++]-'0');
	}
	if(ch[i]=='.')
	{
		i++;
		while(check(i))
		{
			t*=0.1;
			temp2+=((int)ch[i++]-'0')*t;
		}
	}
	results[p++]=temp1+temp2;
	return i;
}
int main()
{
	scanf("%s",ch);
	int i=0;
	while(ch[i]!='\0')
	{
		if(check(i))
		{
			i=pickUp(i);
		}
		else i++;
	}
	for(i=0;i<p;i++)
	printf("%.2lf ",results[i]);
	return 0;
 }
