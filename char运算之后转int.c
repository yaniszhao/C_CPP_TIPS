#include <stdio.h>
int main(int argc, char *argv[])
{
	unsigned char a = 200,b=200;//200==>1100 1000
	printf("%d\n",(a+b));//400==>正数符号1 1001 0000
	printf("%d\n",(char)a+b);//144==》1001 0000
	printf("%d\n",(char)(a+b));//-112==>负数符号拓展1...1 1001 0000
	return 0;
}

