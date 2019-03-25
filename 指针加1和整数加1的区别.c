#include <stdio.h>

int main(int argc, char *argv[])
{
    int arr[]={4,3,6,1};
    printf("%p\n", arr);//0x7ffeeabc8a90
    printf("%p\n", arr+1);//0x7ffeeabc8a94
    printf("%p\n", (long long)arr+1);//0x7ffeeb867a91
    int *p=arr;
    printf("%p\n", (long long)p+1);//0x7ffeeb867a91
    return 0;
}
