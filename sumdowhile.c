#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n;
    int num,sum = 0, avg = 0;

    int count = 1;

    printf( "Enter value of N:\n" );
    scanf( "%d", &n );

    //while ( count <= n )
    do
    {
        printf( "\n Enter value of %d number:", count );
        scanf( "%d", &num );

        sum += num;
        count ++;
    }
    while ( count <= n);
    avg = sum / n;

    printf( "sum of %d numbers = %d\n",n,sum );
    printf( "\nAverage of %d numbers = %d\n",n,avg );



    return 0;
}
