//HUST_hxj 20201022
#include<stdio.h>
#include<string.h>
void task1()
{
    long long a;
    scanf("%lld",&a);
    while(a) printf("%d",a%10),a/=10;
    return;
}
void task2()
{
    char s[114514];
    int t[114514],tot=0,temp=-1;
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]<'0'||s[i]>'9')
        {
            if(temp!=-1)t[++tot]=temp,temp=-1;
            continue;
        }
        if(temp==-1)temp=0;
        temp*=10,temp+=s[i]-'0';
    }
    if(temp!=-1)t[++tot]=temp;
    for(int i=1;i<=tot;i++) printf("%d ",t[i]);
    return;
}
void task3()
{
    char s[6666];
    int tot=0,val=0,dot=0;
    double b[6666],temp=-1;
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if((s[i]<'0'||s[i]>'9')&&s[i]!='.')
        {
            if(temp!=-1)b[++tot]=temp,temp=-1,val=0,dot=0;
            continue;
        }
        if(temp==-1)temp=0;
        if(s[i]=='.')
        {
            dot=1;
            continue;
        }
        if(dot)
        {
            double base=1.0;
            ++val;
            for(int j=1;j<=val;j++)
                base*=0.1;
            temp+=base*(s[i]-'0');
            continue;
        }
        temp*=10,temp+=s[i]-'0';
    }
    if(temp!=-1)b[++tot]=temp;
    for(int i=1;i<=tot;i++) printf("%lg ",b[i]);
}
int main()
{
    int op;
    scanf("%d",&op);
    switch(op)
    {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
    }
    return 0;
}