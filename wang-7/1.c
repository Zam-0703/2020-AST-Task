#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[100];
    char *p = input;
    int mem[100];
    int count = 0, sum, tens = 1;
    int i = 0;

    scanf( "%s", &input );
    for( ; *p != '\0'; p++, sum = 0, count = 0, tens = 1 )
    {
        if( *p > 47 && *p < 58 && ( *( p + 1 ) < 48 || *( p + 1) > 57 ) )
        {
            for( ; *p > 47 && *p < 58; p-- )
            {
                sum += (*p - 48) * tens;
                count++;
                tens *= 10;
            }

            p += count + 1;
            mem[i] = sum;
            i++;
        }
    }
    int j;
    for( j = 0; j < i; j++)
    {
        printf( "%d ", mem[j] );

    }
}
