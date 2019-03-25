#include <stdio.h>

int main(int argc, char *argv[])
{
    int x;
    x=-30+4*7-24;
    printf("%d\n",x);//-26
    x=-30*5%-8;
    printf("%d\n",x);//-6
    x=-30*5%8;
    printf("%d\n",x);//-6
    printf("%d,%d\n",-150/8, -150%8);//-18,-6
    printf("%d,%d\n",-150/-8, -150%-8);//18,-6

    return 0;
}
