#include <stdio.h>
int main() 
{
	char a = 0x80;
	int b = 0x80;
	//char c = 100b;//c语言无法用2进制数值
	printf("%d\n", a);//-128，前面没法扩展所以最高位是1即为负数
	printf("%d\n", b);//128
}
