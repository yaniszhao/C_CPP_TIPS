#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(int argc, char *argv[])
{//对输入字符的分别提取整数和浮点数
    char s[]="12 3.14 11 12.0 5.24";
    char str[10];
    int iarr[10], inum=0, fnum=0;
    float farr[10];
    for (char *p=s; *p!='\0'; ) { 
        sscanf(p, "%s", str);
        printf("%s\n", str);
        int n=strlen(str);
        p+=n+1;//回到下一个数值的起始地址
        if (strchr(str, '.')==NULL) {//int
            int a=atoi(str);
            iarr[inum++]=a;
        } else {//float
            float b=atof(str);
            farr[fnum++]=b;
        }   
        if (p[-1]=='\0') break;
    }   
    //sort
    for (int i=0; i<inum; i++) printf("%d,", iarr[i]);
    putchar(10);
    for (int i=0; i<fnum; i++) printf("%f,", farr[i]);
    putchar(10);
    return 0;
}
