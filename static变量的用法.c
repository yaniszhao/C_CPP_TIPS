#include <stdio.h>

void fun(int a)
{
    //static int var = a+1;//初始化必须是常数否则编译不过
    static int var=1;
    var+=a;
    if (a>10) return;
    printf("%d\n", var);
    fun(var);
}

void fun1()
{
    for (int i=0; i<5; i++) {
        static int var=5;//只会在程序运行开始的时候初始化一次
        printf("%d\n", var);
        var++;
    }   
}

void fun2()
{
    for (int i=0; i<5; i++) {
        int var=5;//每次都会执行一次var=5
        printf("%d\n", var);
        var++;
    }   
}

int main(int argc, char *argv[])
{
    fun1();
    fun2();
    return 0;
}
