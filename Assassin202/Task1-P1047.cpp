#include <stdio.h>

int main()
{
	int x, y;
	int j, k;
	int i, t=0;
	scanf("%d %d",&x,&y);
	int a[x+1];
	for(i = 0; i<=x; i++ )
	a[i] = 0 ;
	
	for(i=0;i<y;i++)
	{
		scanf("%d %d",&j, &k);
		for(;j<=k;j++)
		a[j]=1;
	}
	
	for(i=0;i<x+1;i++)
	if(a[i]==0) t++;
	printf("%d",t);
	return 0;
}

