#include <stdio.h>
void inc1(int *i)
{
    printf("%x\n",i);//e07ffa8c
    int a=*i++;//可以看成a=*i让后i++,但要知道实际用的是拷贝
    printf("%d\n",a);//3
    printf("%x\n",i);//e07ffa90
}

void inc2(int *i)
{
    printf("%x\n",i);//e07ffa8c
    ++*i;//可看成++(*i)
    printf("%x\n",i);//e07ffa8c
}

int main(int argc, char *argv[])
{
    int a=3;
    inc1(&a);
	printf("%d\n",a);//3
    inc2(&a);
	printf("%d\n",a);//4
	return 0;

}

int func(int *p)
{//*p-- = 3相当于*p = 3; p--;
    return (*p-- = 3) - 1;
}

int main1(int argc, char *argv[])
{
    int arr[]={10,7,5};
    int *p=arr+1;
    printf("%d\n", func(p)+ *p);//5
    return 0;
}
