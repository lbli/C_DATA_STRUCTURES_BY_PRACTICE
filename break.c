#include <stdio.h>

int main(int argc, const char *argv[])
{
    int count = 0;
    int sum = 0, num = 0;


    for(;;)
    {
        if ( count == 5 )
        {
            printf( "\n reached upper limit of 5 for the loop" );
            break;
        
        }
        else
        {
            printf( "pls input value of %d numbers\n",count );
            scanf( "%d",&num );

            sum += num;
            count ++;
        }
    }
//    avg = sum / count;
    printf( "\nthe avg you input five nums is %d\n",sum );

    return 0;
}
