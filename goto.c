#include <stdio.h>

int main(int argc, const char *argv[])
{
    int num, sum = 0,count = 0;

start:
    printf( "\nEnter value of number:" );
    scanf( "%d",&num );

    sum += num;

    count ++;

    printf( "number:%d",num );

    if( count > 3)
        goto stop1;
    else
        goto start;
stop1:
    printf( "\n exiting the main program" );

    return 0;
}
