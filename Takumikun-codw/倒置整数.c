#include <stdio.h>
#include <stdlib.h>

void reverse_integer(long long n);

int main()
{
    long long num;
    scanf("%lld", &num);
    reverse_integer(num);
    return 0;
}

void reverse_integer(long long n)
{
    printf("%d", n%10);
    if((n / 10) != 0)
        reverse_integer(n/10);
}
