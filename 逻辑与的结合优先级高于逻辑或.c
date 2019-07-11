#include <stdio.h>

int fun0()
{
    printf("fun0\n");
    return 0;
}

int fun1()
{
    printf("fun1\n");
    return 1;
}

int fun2()
{
    printf("fun2\n");
    return 2;
}

int main(int argc, char *argv[])
{
    int i;
    i = fun1() && fun0() || fun2();//fun1 fun0 fun2
    printf("------\n");
    //说明了&&优先级高于||是结合优先级高，但是运算还是从左到有运算
    i = fun1() || fun0() && fun2();//fun1
    printf("------\n");
    i = fun0() || fun1() && fun2();//fun0 fun1 fun2
    printf("------\n");
    //说明了&&优先级高于||是结合优先级高，但是运算还是从左到有运算
    i = fun0() && fun1() || fun2();//fun0 fun2
    printf("------\n");
    i = fun0() && (fun1() || fun2());//fun0
    return 0;
}
