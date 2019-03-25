#include <stdio.h>
void fun1()
{
	printf("fun1...\n");
}

void fun2()
{
	printf("fun2...\n");
}

int fun3()
{
	int a=2,b=3;
	return a>b?0:1;
}

void fun4()
{//解释三目运算符为什么从右到左结合
    int a=1,b=2,c=3,d=4,e=5;
    //从右到左所以是a>b?c:(d>e?d:e);
    //若是从左到右则是(a>b?c:d>e)?d:e;
    int k=a>b?c:d>e?d:e;
    printf("%d\n", k);
}

int main()
{
	int a=1,b=2;
	a>b ? fun1() : fun2();//还是会执行fun2
	printf("%d\n",fun3());
    fun4();
}
