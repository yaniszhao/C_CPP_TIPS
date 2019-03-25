#include <stdio.h>

#define SQR(x) ((x)*(x))

int main(int argc, char *argv[])
{
    int a=5;
    int b=SQR(a++);
    printf("%d\n%d\n", a, b);//可能是7 30也可能是7 25
    return 0;
}
