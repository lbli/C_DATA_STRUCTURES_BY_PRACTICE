#include <stdio.h>

#define PI 3.141519

float FindArea(float radius);

int main(int argc, const char *argv[])
{
    float radius,area;

    printf( "enter radius of the ball, to stop enter 0 for the radius\n" );

    printf( "radius=?" );

    scanf( "%f",&radius );

    while( radius != 0 )
    {
        if( radius < 0 )
            area = 0;
        else
            area = FindArea( radius );

        printf( "Area = %f\n",area);

        printf( "enter radius of the ball,to stop enter 0 for the radius\n" );

        printf( "\n Radius=?" );
        scanf( "%f",&radius );
    }

    return 0;
}

float FindArea(float radius)
{
    float answer;

    answer = 4 * PI * radius * radius;

    return answer;

}
