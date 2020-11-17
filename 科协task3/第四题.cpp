#include<stdio.h>
#include<string.h> 

int main()
{
    char s[100];
    int a[100], j = 0;
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
                else
                {
                    j++;
                    break;
                }
            }
        }

    }
    for (int i = 0;a[i]>0;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
