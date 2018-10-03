#include <stdio.h>
//#include <conio.h>
#define MAX 60

int main(int argc, const char *argv[])
{
    float temp;

    printf( "Enter temperature of header\n" );
    scanf( "%f",&temp);

    while( temp < MAX )
        printf( "\n tempterature is lukewarm.switch on header\n" );
        
    printf( "\n water is hot,switch off the header\n" )    ;

    return 0;
}
