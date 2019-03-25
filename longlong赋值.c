#include <stdio.h>
int main(int argc, char *argv[])
{
     unsigned long long a=0x8fffffffffffffff;
     unsigned long long b;
     b=a;
     printf("%llu\n", a);//10376293541461622783
     printf("%llu\n", b);//10376293541461622783
     b=0x8fffffffffffff11;
     printf("%llu\n", b);//10376293541461622545
     return 0;
}
