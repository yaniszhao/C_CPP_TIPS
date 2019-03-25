#include <stdio.h>
int main(int argc, char *argv[])
{
	int a[10] = {10*1};//第一个被初始化为10,后面为0
	int b[10] = {};//全部被初始化为0
	int c[10];//都未被初始化
    for (int i=0; i<10; i++)
        printf("%d,", a[i]);
    putchar('\n');
    for (int i=0; i<10; i++)
        printf("%d,", b[i]);
    putchar('\n');
    for (int i=0; i<10; i++)
        printf("%d,", c[i]);
}

