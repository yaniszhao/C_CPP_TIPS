#include <stdio.h>

int main(int argc, char *argv[])
{
    char s1[]="3.5";
    char s2[]="3";
    char s3[]="1077936128";//ie754: 0,10000000,10000...
    float f;
    //
    sscanf(s1, "%f", &f);
    printf("%f\n", f);//3.500000
    sscanf(s1, "%d", &f);//%d
    printf("%f\n", f);//0.000000，有点奇怪
    //
    sscanf(s2, "%f", &f);
    printf("%f\n", f);//3.000000
    sscanf(s2, "%d", &f);//%d
    printf("%f\n", f);//0.000000，有点奇怪
    //
    sscanf(s3, "%f", &f);
    printf("%f\n", f);//1077936128.000000
    sscanf(s3, "%d", &f);//%d
    printf("%f\n", f);//3.000000，按照整数读进来存，按浮点数来解释
    return 0;
}
