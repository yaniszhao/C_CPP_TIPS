#include <stdio.h>

int main(int argc, char *argv[])
{
    int a=21, b=30;
    float x=4.2, y=8.4;
    float ans=(float)(a+b)/6+(int)x%(int)y;
    printf("%f\n",ans);//12.500000
    return 0;
}

int main1(int argc, char *argv[])
{
    int a=8;
    float x=5.6, y=12.3;
    int ans=a%5*(int)(x+y)%3/5;
    printf("%d\n",ans);//0
    printf("%f\n",x+ans);//5.600000
    return 0;
}
