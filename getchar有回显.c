#include <stdio.h>
int main(int argc, char *argv[])
{
    //getchar有回显但是要有回车之后才有反应，
    //因为有行缓冲机制，有回车之后才放到用户缓存区让getchar得到数据。
    char c;
    c=getchar();
    putchar(c);
    return 0;
}

int main1(int argc, char *argv[])
{
    char c;
    scanf("%c", &c);
    getchar();//吸收回车
    //putchar('\n');//回车会回显出来，这里不用再回车了
    putchar(c);
    putchar('\n');
    fflush(stdout);
    c=getchar();//这里有回显
    putchar(c);
    putchar('\n');
    fflush(stdout);
    return 0;
}
