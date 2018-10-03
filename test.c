#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char *src = "abc";
    char *dst = "abc";
    int ret;

    printf( "the compare result is %d",strcmp(src,dst) );

    return 0;
}
