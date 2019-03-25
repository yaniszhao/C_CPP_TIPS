#include <stdio.h>

int main(int argc, char *argv[])
{
    int a=8, b=3;
    float f1=a/b;
    float f2=(float)a/b;
    float f3=a/(float)b;
    printf("%.2f\n", f1);
    printf("%.2f\n", f2);
    printf("%.2f\n", f3);
    return 0;
}
