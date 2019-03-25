#include <stdio.h>
int main(int argc, char *argv[])
{
	char str[] = "hello world!";
 	FILE *f = fopen("abx.txt", "w+");//w+是可读可写，a才是可追加
	fwrite(str, strlen(str), 1, f);//hello world!
	printf("%d\n", strlen(str));//12
	fprintf(f,"%s\n", "hhh");//hello world!hhh\n
	fclose(f);
	return 0;
}
