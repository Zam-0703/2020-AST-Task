#include <stdio.h>
#include <string.h>
int search(char *p, int i, double a[]);

int main()
{
	int t;
	int n;
	double a[2000];
	char s[10000];
	gets(s);
	char *p = s;
	n = strlen(s);
	
	t = search(p, n, a);
	
	for(n=0;n<t;n++)
	printf("%lf ",a[n]);
	
	return 0;
}

int search(char *p, int n, double a[])
{
	int i, x;
	for(i=0;i<n;i++)
	{
		if(*(p+i)>'0'&&*(p+i)<'9')
		 {
		 	sscanf(p+i,"%lf",&a[x]);
		 	x++;
		 }
		 
		 for(;*(p+i)>'0'&&*(p+i)<'9'||*(p+i)=='.';i++)
		 {
		 	strcpy(p+i,p+i+1);
		 }	 	 
	}
	return x;		
}

