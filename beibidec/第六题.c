#include<stdio.h>
int tiqu(double *num, char zifu[])
{
    int a=0;int g=0;
    int b;int c=0;
    double suma=0.0;double sumb=0.0;double sumc=0.0;
    for(;*zifu!='\0';)
    {
        b = 0;
       for(;*zifu <= '9' && *zifu >= '0';zifu++)
        {
            b = 1;
            suma= suma*10 +(double)(*zifu - '0');
        }
        zifu++;
        for(;*zifu <= '9' && *zifu >= '0';zifu++)
        {c++;
            sumb= sumb*10+(double)(*zifu - '0');
        }
        for(;c>0;c--)
          {
          	sumb=sumb/10;
		  } 
        sumc=(suma+sumb);
        if(b==1)
        {
            a ++ ;
            *num=sumc;
            *num++;
            suma= 0.0;sumb=0.0;sumc=0.0;
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
    char zifu[9999];
 
    double num[9999];
    int i;
    int j;
    gets(zifu);
 
    j= tiqu(num,zifu);
    for(i = 0 ; i <j; i++)
    {
        printf("num[%d] = %lf\t", i, num[i]);
    }
    return 0;
} 
