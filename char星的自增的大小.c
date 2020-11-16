#include <stdio.h>
int main(int argc, char *argv[])
{//char*自增的大小
	struct {int len;char *str;} a, *p;
	//struct {int len;char *str;} a;
	p = &a;
	a.str = (char *)0x11;
	p->str++;
	printf("%p\n", p->str);
}
