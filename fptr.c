#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PI 3.14159

typedef struct{
    char color[20];
    char sport[20];
    float radius;
    float area;
} stsb;

stsb ball[10];

float FindArea( float radius );


int main(int argc, const char *argv[])
{
    int i;
    char stg[20];

    FILE *fptr;

    fptr = fopen( "SportsBall", "w" );

    if( fptr == NULL )
    {
        printf( "File counld not open\n" );
        exit(1);
    }

    printf( "To stop enter END for the color filed\n" );
    printf( "\n Enter color of the ball:" );
    scanf( "%s",ball[i].color );

    //while( !strcmp(ball[i].color,"END") ) 
    while( strcmp(ball[i].color,"END")  )
    //while( ball[i].color[0] != 'E' || ball[i].color[1] != 'N' || ball[i].color[2] != 'D')
    {
        fprintf(fptr,"%s",ball[i].color);

        printf( "Sport=?=" );
        scanf( "%s",ball[i].sport);
        fprintf( fptr,"%s",ball[i].sport );


        printf( "\n RADIUS=?" );
        scanf( "%f",&ball[i].radius);
        fprintf( fptr,"%f",ball[i].radius);

        ball[i].area = FindArea( ball[i].radius );
        fprintf(fptr,"%f\n",ball[i].area);

        i ++;

        printf( "to stop enter END for the color filed\n" );
        printf( "\n enter color of ball:" );
        scanf( "%s",ball[i].color );
    
    }

    fclose(fptr);

    fptr = fopen( "SportsBall", "r");

    if(fptr == NULL )
    {
        printf( "File counld not be open\n" );

        while (!feof(fptr))
        {
            fscanf( fptr,"%s",stg);
            printf( "%s\n",stg );
        }
        fclose(fptr);
    }

    return 0;
}

float FindArea( float radius )
{
    return 4 * PI * radius * radius;
}
