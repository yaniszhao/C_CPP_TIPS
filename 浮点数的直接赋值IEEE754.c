#include <stdio.h>
int main()
{
	//float f = 1.5;
	float f = 0x3fc00000F;
	printf("%f\n", f);//17112760320.000000
	printf("%p\n", f);//0x100
	printf("%x\n", f);//200
}
