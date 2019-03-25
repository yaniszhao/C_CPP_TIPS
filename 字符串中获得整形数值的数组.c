#include <stdio.h>
int main(int argc, char *argv[])
{//读取数值，溢出的值自动设为-1
    int arr[10], cnt=0;
    char ch;
    int overflag=0, numflag=0, sum=0, tmp;
    while ((ch=getchar())!='\n') { 
        if (ch>='0'&&ch<='9') {
            if (overflag) continue;
            int tmp=sum*10+ch-'0';
            if (tmp<sum) {overflag=1; sum=-1;}
            else sum=tmp;
            numflag=1;
        }   
        else {
            if (!numflag) continue;
            arr[cnt++]=sum;
            sum=0;
            numflag=0;
            overflag=0;
        }
    }   
    for (int i=0; i<cnt; i++) printf("%d\n", arr[i]);
    return 0;
}
int main1(int argc, char *argv[])
{//读取数值，scanf的%d参数对于溢出的值自动设为-1
    char s[]="uestc2015jsj320dsa936497947294797497917947jsjd#";
    int arr[10], cnt=0, num;
    for (char *p=s; *p!='#'; ) { 
        if (*p>='0'&&*p<='9') {
            sscanf(p, "%d", &num);//对于溢出的自动设为-1
            arr[cnt++]=num;
            for (; *p>='0'&&*p<='9'; p++);
        }   
        else p++;
    }   
    for (int i=0; i<cnt; i++) printf("%d\n", arr[i]);
    return 0;
}
