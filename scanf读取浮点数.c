#include <stdio.h>
int main(int argc, char *argv[])
{
	double d = 2e5;
	printf("%f\n", d);//200000.000000
	scanf("%f", &d);//12，把12的float的格式给了double的高4个字节
	//getchar();//scanf会自动跳过空格和换行符
	printf("%lf\n", d);//200000.031860
	printf("%f\n", d);//200000.031860
	scanf("%lf", &d);//12
	printf("%f\n", d);//12.000000
	scanf("%lf", &d);//sda12
	printf("%f\n", d);//12.000000，竟然会自动跳过字符串
}
