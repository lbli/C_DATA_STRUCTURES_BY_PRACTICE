#include <stdio.h>
//#define EOL '\n'
#include <ctype.h>

void LU (char text[80]);

int main(int argc, const char *argv[])
{
    char letter[80];

    LU( letter );


//    getc();

    return 0;
}

void LU ( char text[80])
{
    int tag,count = 0;

    printf( "enter the text:\n" );

    while( (text[count] = getchar()) != '\n')
        ++ count;
    tag = count;
    count = 0;
    printf( "the text ub upper case is \n" );
   

    
    while( count < tag )
    {
        putchar( toupper(text[count]) );
        ++ count;
    }
}
