#include <stdio.h>
#include <string.h>
int search(char *p, int i, int a[]);

int main()
{
	int t;
	int n, a[2000];
	char s[10000];
	gets(s);
	char *p = s;
	n = strlen(s);
	
	t = search(p, n, a);
	
	for(n=0;n<t;n++)
	printf("%d ",a[n]);
	
	return 0;
}

int search(char *p, int n, int a[])
{
	int i, x;
	for(i=0;i<n;i++)
	{
		if(*(p+i)>'0'&&*(p+i)<'9')
		 {
		 	sscanf(p+i,"%d",&a[x]);
		 	x++;
		 }
		 
		 for(;*(p+i)>'0'&&*(p+i)<'9';i++)
		 {
		 	strcpy(p+i,p+i+1);
		 }	 	 
	}
	return x;		
}

