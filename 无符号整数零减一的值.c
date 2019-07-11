#include <stdio.h>
int main(int argc, char *argv[])
{
    unsigned int a=0;
    unsigned int b=a-1;
    printf("%u\n", b); //4294967295
    printf("%p\n", b); //0xffffffff
    return 0;
}
