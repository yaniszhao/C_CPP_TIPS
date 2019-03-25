#include <stdio.h>
int main(int argc, char *argv[])
{//ftell使用
	FILE *fp = fopen("test.dat", "w");
	fputc('A', fp);
	fputc('\n', fp);
	fputc('B', fp);
	fputc('\n', fp);
	fputc('C', fp);
	int len = ftell(fp);
	printf("%d\n", len);//5
	return 0;
}