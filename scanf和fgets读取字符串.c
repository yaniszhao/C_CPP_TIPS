#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char s[1024], s2[2];
#if 0
    //输入abc abc
    scanf("%s", s);
    printf("%d\n", getchar());//打印的32->空格
    scanf("%s", s);
    printf("%d\n", getchar());//打印的10->回车
#endif
#if 0
    //输入abc\nabc\n
    gets(s);
    printf("%d\n", getchar());//打印的97->a
#endif
    //文件内容abc abc\nabc
    FILE *fp=fopen("a.txt", "r");
#if 0
    fgets(s, 1024, fp);
    puts(s);
    printf("%d\n", fgetc(fp));//打印的97->a
    fgets(s, 1024, fp);//最后即使没有换行符还是能正常吸收
    puts(s);
#endif
    fgets(s2, 2, fp);
    //正常读完是\n\0，没读完一行最后一个字符是\0
    printf("%d,%d\n", s2[0], s2[1]);//打印的97,0->a,\0
    fclose(fp);
    return 0;
}
