#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[100];
    double mem[100];
    double sum, tens = 1;
    int i = 0,count = 0;

    scanf( "%s", &input );
    char *p = input;
    for( ; *p != '\0'; p++, sum = 0, count = 0, tens = 1 )
    {
        if(  *p > 47 && *p < 58  && ( ( *( p + 1 ) < 48 && *( p + 1 ) != 46 ) || *( p + 1) > 57 ) )
        {
            for( ; *p > 47 && *p < 58 || 46 == *p; p-- )
            {
		        if( 46 == *p )
				{
				    sum /= tens;
					tens = 1;
					count ++;
					continue;
				}
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
        printf( "%f ", mem[j] );

    }
}
