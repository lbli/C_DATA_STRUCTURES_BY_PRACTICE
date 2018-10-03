#include <stdio.h>

#define PI 3.1415926

float FindArea( float radius,float height );
int main(int argc, const char *argv[])
{
    float radius,height;

    float area;

    printf( "To stop enter 0 for the radius\n" );
    printf( "\n Radius=" );
    scanf( "%f",&radius);

    printf( "\n Height=" );
    scanf( "%f",&height );

    while ( radius != 0 )
    {
        if( radius < 0)
            area = 0;
        else
            area = FindArea( radius,height);

        printf( "Area of cylinker=%f\n",area );
        printf( "To stop enter 0 for the radius\n" );

        printf( "\nRadius=" );
        scanf( "%f",&radius );

        printf( "\nHeight=" );
        scanf( "%f",&height );
    
    }

    return 0;
}

float FindArea( float radius,float height )
{
    return 2 * PI * radius * height;

}


