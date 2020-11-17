#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    double a[100]; 
	int j=0,k;
    gets(s);
    int len = strlen(s);
    for (int i = 0;i < len;i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            for (j;;)
            {
                a[j] = a[j] * 10 + (s[i] - 48);
                if (s[i + 1] >= 48 && s[i + 1] <= 57)
                {
                    break;
                }
                else if(s[i+1]==46)
                {
                    double x=0.1;
               		for(k=i+2;s[k]>=48 && s[k]<=57;x=x*0.1,k++)
                    {
               			a[j]=a[j]+(s[k]-48)*x;
                    }
                    i=k;
                    j++;
                   	break;
                }
                else
                {
                    j++;
                    break;
                }
            }
        }

    }
    for (int i = 0;i<j;i++)
    {
        printf("%f ", a[i]);
    }
    printf("\n");
    return 0;
}
