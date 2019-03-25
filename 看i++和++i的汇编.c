#include <stdio.h>
int main(int argc, char *argv[])
{//看i++和++i的汇编
        int a=2;
        int b=a++;//a会自加，但是b得到的是a加之前的拷贝，可看成b=a然后a++
        printf("%d\n", b);//2
        b=++a;//a先自加，然后b得到a的值
        printf("%d\n", b);//4
        return 0;
}
