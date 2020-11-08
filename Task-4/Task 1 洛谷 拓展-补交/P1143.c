#include<stdio.h>
#include<string.h>
int read(int n,char a[]);
void write(int m,int r);
int main()
{
	int n,m,r;
	char a[100];
	scanf("%d",&n);
	scanf("%s",a);
	scanf("%d",&r);
	m=read(n,a);
//	printf("%d",m);
	write( m, r);
//	a[0]='0';
//	printf("%c",'A'+1);
	return 0;
 } 
 int read(int n,char a[])
 {
 	int i,m,cnt,j,p;
 	m=0;
 	cnt=1;
 	i=strlen(a)-1;
 	if((a[i]>='0')&&(a[i]<='9'))
 	{
 		m=a[i]-'0';
	 }
	if((a[i]>='A')&&(a[i]<='F'))
	{
		m=a[i]-'A'+10;
	}
 	for(i=strlen(a)-2;i>=0;i--)
 	{
 		if((a[i]>='0')&&(a[i]<='9'))
 		{
 			p=a[i]-'0';
 			for(j=1;j<=cnt;j++)
 			{
 				p*=n;
			 }
			m+=p;
			cnt++;
		 }
		 if((a[i]>='A')&&(a[i]<='F'))
		{
			p=a[i]-'A'+10;
 			for(j=1;j<=cnt;j++)
 			{
 				p*=n;
			 }
			m+=p;
			cnt++;
		}
	 } 
	return m;
 }
 void write(int m,int r)
 {	
 	int b[100];
 	int i;
 	int cnt=0;
 	for(i=0;m/r!=0;i++)
 	{
// 		printf("%d\n",m);
 		b[i]=m%r;
 		m/=r;
 		cnt++;
	 }
	b[cnt]=m;
	for(i=cnt;i>=0;i--)
	{
		if(b[i]<=9)
		{
			printf("%d",b[i]);
		}
		if(b[i]>=10)
		{
			printf("%c",'A'+b[i]-10);
		}
	}
 }
