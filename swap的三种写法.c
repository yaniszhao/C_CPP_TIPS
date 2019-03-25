#include <stdio.h>

void swap1(int *a, int *b) 
{//多用一个空间
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

void swap2(int *a, int *b) 
{//不会多用空间但是要防止a+b越界
    *a=*a+*b; 
    *b=*a-*b;
    *a=*a-*b;
}

void swap3(int *a, int *b) 
{//异或，不用空间也不会越界
    *a^=*b;
    *b^=*a;
    *a^=*b;
}

int main(int argc, char *argv[])
{
    int arr[]={3,7,9,2};
    for (int i=0; i<4; i++) printf("%d,", arr[i]);
    putchar('\n');
    swap1(arr, arr+1);
    for (int i=0; i<4; i++) printf("%d,", arr[i]);
    putchar('\n');
    swap2(arr+1, arr+2);
    for (int i=0; i<4; i++) printf("%d,", arr[i]);
    putchar('\n');
    swap3(arr+2, arr+3);
    for (int i=0; i<4; i++) printf("%d,", arr[i]);
    putchar('\n');
    return 0;
}
