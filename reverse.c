#include <stdio.h>

void REVERSE( int n);

int main(int argc, const char *argv[])
{
    int x;

    printf( "pls input a number:\n" );
    scanf( "%d",&x );

    REVERSE( x );



    return 0;
}

void REVERSE( int n)
{
    int r = 0;
    int s = 0;

    while ( n > 0)
    {
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }

    printf( "the reverse of the given number is %d\n",s );

}
