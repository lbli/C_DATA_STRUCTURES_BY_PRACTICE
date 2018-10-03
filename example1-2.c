#include <stdio.h>

#define PI 3.14159



float FindArea( float radius );

int main(int argc, const char *argv[])
{
    int n = 0, i = 0;
    int max_radius_num;

    float radius[max_radius_num];
    float area[max_radius_num];

    printf( "pls input max_radius num=?" );
    scanf( "%d",&max_radius_num );

    printf( "to stop enter 0 for the radius\n" );
    printf( "radius=?" );

    scanf( "%f",&radius[i]);

    while( radius[i] != 0 && i < max_radius_num)
    {
        if( radius[i] < 0 )
            area[i] = 0;
        else
            area[i] = FindArea( radius[i] );
        ++ i; 
        //++ n;
        printf( "to stop enter 0 for the radius \n" );
        printf( "\n radisu = ?" );
        scanf( "%f",&radius[i] );
    }

    //n =- i;
    printf( "\n surface area of balls\n");

    for( i = 0;i < max_radius_num;i ++)
        printf( "radius=%f area=%f\n",radius[i],area[i] );

    return 0;
}

float FindArea( float radius) 
{
    return 4 * PI * radius * radius;
}
