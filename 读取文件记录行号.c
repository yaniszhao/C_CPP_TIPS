#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{//记录行号，一个字符一个字符的读
    int flag=1, line=0;
    FILE *fp=fopen("a.txt", "r");
    char ch; 
    //c语言判断文件结尾是看最后字符是否为1，即使文件结尾没有-1它也会返回-1
    while((ch=fgetc(fp)) != EOF) {//用feo最后要多打一次-1
        if (flag) printf("%d:", ++line);
        flag=(ch=='\n'?1:0);
        putchar(ch);
    }   
    return 0;
}

int main1(int argc, char *argv[])
{//记录行号，一行一行的读
    char s[3];
    int line=0;
    int flag=1;
    FILE *fp=fopen("a.txt", "r");
    while (!feof(fp)) {//最后应该会多进来一次，但是没有数据了fgets也不会吸收数据，fprintf\0也不会有显示
        if (flag) printf("%d:", ++line);
        fgets(s, 1024, fp);//最后即使没有换行符到文件结尾的时候也可以正常读入
        int len=(int)strlen(s);
        flag = s[len-1]=='\n' ? 1 : 0;
        printf("%s", s); 
    }//开始想用do-while的，后来发现while放在前面好点
    return 0;
}
