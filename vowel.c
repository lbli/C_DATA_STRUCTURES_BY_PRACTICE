#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int i = 0;
    int nv = 0;
    char x[20];

    printf( "pls inpuet a string:" );
    scanf( "%s",x );


    while( x[i] != '\0' )
    {
        switch( toupper( x[i]) )
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': nv ++;break;
        }

        i ++;
        if ( i == nv )
            printf( "the strings you input all is vowel\n" );
        else

            printf( "the strings you input not all is vowel\n" );
        


    return 0;
}
