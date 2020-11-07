#include <stdio.h>
 
int tiqu(int *num, char zifu[])
{
    int a = 0;
    int b;
    int sum = 0;
    for(;*zifu!='\0';)
    {
        b = 0;
        for(;*zifu <= '9' && *zifu >= '0';zifu++)
        {
            b = 1;
            sum = sum * 10 +(*zifu - '0');
        }
        if(b == 1)
        {
            a ++ ;
            *num=sum;
            *num++;
            sum = 0;
        }
        else
        {
            zifu++;
        }
    }
    return a;
}
 
 
 
int main()
{
    char zifu[10000];
 
    int num[10000];
    int i;
    int a;
    gets(zifu);
 
    a = tiqu(num,zifu);
    for(i = 0 ; i < a ; i++)
    {
        printf("num[%d] = %d\t", i, num[i]);
    }
    return 0;
} 
