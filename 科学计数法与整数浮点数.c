#include <stdio.h>
int main() 
{
	int a=1.23e3;
	int b=1.23e2;
	int c=1.234e2;
	float f=0.23e2;
	printf("%d\n", a);//1230
	printf("%d\n", b);//123
	printf("%d\n", c);//123
	printf("%f\n", f);//23.000000
	printf("%d\n", f);//1024因为传进去的是浮点数的表示然后解释成整数
}
