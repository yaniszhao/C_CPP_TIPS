#include <stdio.h>

int main(int argc, char *argv[])
{
    int a=3;
    switch (a) {//case只相当于标签，从哪开始没遇到break后面都会打印
        default://从这里一直打印到结束
            printf("default\n");
        case 1:
            printf("aaa\n"); 
        case 0:
            printf("bbb\n");
        printf("xxx\n");
    }
    return 0;
}

int main2(int argc, char *argv[])
{
    int a=0;
    switch (a) {//case只相当于标签，从哪开始没遇到break后面都会打印
        case 1:
            printf("aaa\n");
        case 0:
            printf("bbb\n");
        default:
            printf("ddd\n");
        printf("xxx\n");


    }
    return 0;
}

int main1(int argc, char *argv[])
{
	int a=2,b=7,c=5;
    printf("%d\n", a>0);//1
	switch(a>0){
	case 1:
		switch(b>0){
		case 1:printf("*");break;
		case 2: printf("!");break;
		}
	case 0:
		switch(c==5){
		case 0:printf("&");break;
		case 1:printf("#");
		case 2: printf("!");break;
		}
	default: printf("*");
	}
	printf("\n");
}//结果*#!*
