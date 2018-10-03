#include <stdio.h>

#define PI 3.14159

float FindArea( float radius);

struct FootBall {
    char color[20];
    float radius;
    float area;
};

typedef struct FootBall stsb;

stsb ball[10];


int main(int argc, const char *argv[])
{
    int n, i = 0;

    printf( "to stop enter STOP for the color filed\n" );
    printf( "\n enter color of ball:" );

    scanf( "%s",ball[i].color );


    while ( ball[i].color[0] != 'S' || ball[i].color[1] != 'T' || ball[i].color[2] != 'O' || ball[i].color[3] != 'P')
    {
        printf( "\n radius=?" );

        scanf( "%f",&ball[i].radius );

        if(ball[i].radius < 0)
            ball[i].radius = 0;
        else
            ball[i].area = FindArea(ball[i].radius);

        ++ i;

        printf( "to stop enter STOP for the color field\n" );
        printf( "\nEnter color of ball:" );

        scanf( "%s",ball[i].color );
    }

    n =-- i;

    printf( "\n Surface area of Footballs\n" );

    for(i = 0;i <= n;i ++)
    {
        printf( "clolor %s radius= %f,area= %f\n", ball[i].color,ball[i].radius,ball[i].area );
    }

    return 0;
}

float FindArea( float radius )
{
    return 4 * PI * radius * radius;
}
