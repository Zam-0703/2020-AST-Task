#include <stdio.h>

int main()
{
    long long int n;
	scanf("%llu",&n);
	int t;
	
	for(;n>0;)
	{
		t = n%10;
		printf("%d",t);
		n = n/10;
	}
    return 0;
}

