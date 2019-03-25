#include <stdio.h>
int main(int argc, char *argv[])
{
    int i,k,n;
	FILE *fp = fopen("data.dat", "w+");
	for (i=1;i<6;i++) {
		fprintf(fp, "%d", i);
		if (i%3 == 0) fprintf(fp, "\n");
	}//123\n45
    fprintf(fp, "%d", 222);//可以插入
	rewind(fp);
	fscanf(fp, "%d%d", &k, &n);//k=123 n=45
	printf("%d %d\n", k, n);//123 45
    fprintf(fp, "%d", 222);//没插上
    fseek(fp, 0L, SEEK_END);
    fprintf(fp, "%d", 222);//没插上
	rewind(fp);
    fprintf(fp, "%d", 222);//没插上
	fclose(fp);
	return 0;
}
