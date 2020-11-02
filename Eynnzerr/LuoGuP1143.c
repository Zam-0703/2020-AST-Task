#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	char nnum[100],nnum2[100] = {'\000'};
	int mnum[100];
	int m;
	scanf("%d",&n);
	getchar();
	gets( nnum );
	scanf("%d",&m);
	int i;
	int j = strlen(nnum) - 1;
	int sum = 0;
	int k;
	int a;
	for (i = 0;nnum[i] != '\0';i ++,j --)
	{
		nnum2[j] = nnum[i]; 
	} 
	for (i = 0;nnum2[i] != '\0';i++)
	{
		if (nnum2[i] == '0')
			{
				a = 0;
			}
		else if (nnum2[i] == '1')
			{
				a = 1;
			}
		else if (nnum2[i] == '2')
			{
				a = 2;
			}
		else if (nnum2[i] == '3')
			{
				a = 3;
			}
		else if (nnum2[i] == '4')
			{
				a = 4;
			}
		else if (nnum2[i] == '5')
			{
				a = 5;
			}
		else if (nnum2[i] == '6')
			{
				a = 6;
			}
		else if (nnum2[i] == '7')
			{
				a = 7;
			}
		else if (nnum2[i] == '8')
			{
				a = 8;
			}
		else if (nnum2[i] == '9')
			{
				a = 9;
			}
		else if (nnum2[i] == 'A')
			{
				a = 10;
			}
		else if (nnum2[i] == 'B')
			{
				a = 11;
			}
		else if (nnum2[i] == 'C')
			{
				a = 12;
			}
		else if (nnum2[i] == 'D')
			{
				a = 13;
			}
		else if (nnum2[i] == 'E')
			{
				a = 14;
			}
		else if (nnum2[i] == 'F')
			{
				a = 15;
			}				
		for (k = 0;k < i;k ++)
		{

			a *= n; 
		}
		sum += a;
	}
	for (i = 0;sum >= 1;i++)
	{
		mnum[i] = sum % m;
		sum /= m;
	}
	for (i -= 1;i >= 0;i --)
	{
		printf("%d",mnum[i]);
	} 
	return 0;
}
