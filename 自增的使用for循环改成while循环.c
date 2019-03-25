#include <stdio.h>
int main(int argc, char *argv[])
{//i++的用法来减少代码行，for型循环可改成while型循环
	int p[7] = {11,13,14,15,16,17,18};
	int i=0, j=0;
	while ((i<7)&&(p[i]%2==1)) j+=p[i++];
	printf("%d\n",j);//24
	return 0;
}