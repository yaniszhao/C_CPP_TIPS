#include <stdio.h>
int main(int argc, char *argv[])
{
	float f = 5.2;
	printf("(f-f),%d\n", (f-f));//-375199008
	printf("(int)f-f,%d\n", (int)f-f);//256
	printf("(int)(f-f),%d\n", (int)(f-f));//0
	printf("(f-f),%f\n", (f-f));//0.000000
	printf("(f-f),0x%x\n", (f-f));//0x400
}

int main1(int argc, char *argv[])
{
    float f = 4.2;
    int i = f;
    printf("%d\n", f);//-480482592
    printf("%p\n", f);//0x100
    printf("%x\n", f);//200
    printf("%x\n", (int)f);//4
    printf("%d\n", i); //4
    i = 5;
    printf("%d\n", i/2);//2
    printf("%f\n", i/2);//4.200000
    printf("%d\n", i/2.0);//1792
    printf("%d\n", (int)i/2.0);//2048
    printf("%f\n", i/2.0);//2.500000
}