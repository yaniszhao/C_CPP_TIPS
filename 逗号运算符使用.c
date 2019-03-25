#include <stdio.h>
int main(int argc, char *argv[])
{//逗号运算符
	int x = 1, y;
	y= (2*8, x+=5);
	printf("%d\n%d\n", x, y);//6 6
	return 0;
}