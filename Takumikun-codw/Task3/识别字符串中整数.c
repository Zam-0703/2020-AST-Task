#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIM 40

char * s_gets(char *st, int n);
void search(char *str);
int main()
{
    char *input[LIM];
    printf("Enter a string less than %d: \n", LIM);
    gets(input);
    search(input);
    return 0;
}

char * s_gets(char *st, int n)
{
    char ret_val;
    int i = 0;

    ret_val = fgets(st, n ,stdin);
    if(ret_val)
    {
        while(st[i] != '\n' && st[i] != '\0')
            i++;
        if(st[i] == '\n')
            st[i] = '\0';
        else
            while(getchar() != '\n')
                continue;
    }
    return ret_val;
}

/*void search(char *str)
{
    int i, j = 0, mark = 0, t, a[LIM];
    for(i = 0; *str; i++)
    {
        if(str[i] >= '0' && str[i] <= '9' && mark == 0){
            t = atoi(str[i]);
            mark = 1;
        }
        else if(str[i] >= '0' && str[i] <= '9' && mark == 1){
            t = t * 10 + atoi(str[i]);
        }
        else if(mark == 1){
            a[j] == t;
            j++;
            mark == 0;
        }
        if(str[i-1]>='0'&&str[i-1]<='9'){
            a[j] = t;
            j++;
        }
    }
    for(i = 0; i < j; i++)
    {
        printf("%d ", a[i]);
    }

}*/
void search(char *str){
    int i, j = 0, flag = 0, t = 0, a[20];
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] >= '0' && str[i] <= '9' && flag == 0){
            flag = 1;
            t = (int)str[i] - '0';
        }
        else if(str[i] >= '0' && str[i] <= '9' && flag != 0)
            t = t * 10 + (int)str[i] - '0';
        else if(flag != 0){
            a[j] = t;
            j++;
            flag = 0;
        }
    }
    if(str[i-1] >= '0' && str[i-1] <= '9'){
        a[j] = t;
        j++;
    }
    for(i = 0; i < j; i++)
    printf("%d ", a[i]);
}
