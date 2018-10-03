#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, j;

    for( i = 1; i < 10; i ++)
    {
        //printf( "\nMultiplication table for %d X %d \n",i,j );
        printf( "\n");

        for( j = 1; j < 10; j ++)
        {
            printf( " %d X %d = %d\t",i, j, i * j );
        }
    }
    return 0;
}
