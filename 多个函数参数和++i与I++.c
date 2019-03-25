#include <stdio.h>
int main(int argc, char *argv[])
{//函数传参是左到右，函数取参是右到左
    int a=3;
    printf("%d%d%d\n", ++a, ++a, ++a);//456
    a=3;
    printf("%d%d%d\n", a++, a++, a++);//345

}
