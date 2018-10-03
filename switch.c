#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    int choice;
    int num1,num2;

    printf( "1.Addition\n"
            "2.Substraction\n"
            "3.Multiplication\n"
            "4.Division\n"
            "5.Quit\n" );

    do
    {
        printf( "\nEnter you choice:" );
        scanf( "%d",&choice );

        switch( choice )
        {
            case 1:
                printf( "\n Enter num1 num2 :");
                scanf( "%d%d",&num1,&num2 );
                printf( "num1+num2=%d\n",num1 + num2 );
                break;
            case 2:
                printf( "\n Enter num1 num2 :");
                scanf( "%d%d",&num1,&num2 );
                printf( "num1-num2=%d\n",num1 - num2 );
                break;
            case 3:
                printf( "\n Enter num1 num2 :");
                scanf( "%d%d",&num1,&num2 );
                printf( "num1*num2=%d\n",num1 * num2 );
                break;
            case 4:
                printf( "\n Enter num1 num2 :");
                scanf( "%d%d",&num1,&num2 );
                printf( "num1/num2=%d\n",num1 / num2 );
                break;
            case 5:
                printf( "\nexiting from program\n" );
                exit(0);
            default:
                printf( "Invalid choice you input\n" );
        }
    
    }
    while( choice != 5);




    return 0;
}
