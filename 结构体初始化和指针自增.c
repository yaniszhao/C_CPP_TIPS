#include <stdio.h>
struct st {
    int n;
    int *str;
};

int main(int argc, char *argv[])
{
        struct st s={2, NULL};
        printf("%p\n", s.str);//0x0
        s.str++;
        printf("%p\n", s.str);//0x4
        return 0;
}
