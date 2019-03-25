#include <stdio.h>
int x,y,z;
void p(int *x, int y)
{
	--*x;//相当于--(*x)
	y++;
	z=*x+y;//改变的全局的z
}

int main(int argc, char *argv[])
{
	int x=5,y=2,z=0;
	p(&x,y);
	printf("%d%d%d#",x,y,z);//420#
	p(&y,x);
	printf("%d%d%d#",x,y,z);//410#
}
