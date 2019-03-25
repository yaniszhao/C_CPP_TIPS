#include <stdio.h>

//fild是将整数转化为长双精FP80压栈（压到st0） 
//fstp是将弹栈指令，将st0弹出
void int2float()
{
    //整形到浮点型，源只能是整形的
    //movl   $0x7,-0x8(%ebp)
    int i=0x7;//正数,7
    //fildl  -0x8(%ebp)
    //fstps  -0x4(%ebp)
    float f=i;//0x40e00000,7.0
    //printf("i=%d, f=%f\n", i, f);
    //movl   $0xffffff07,-0x8(%ebp)
    i=0xFFFFFF07;//负数，-249
    //fildl  -0x8(%ebp)
    //fstps  -0x4(%ebp)
    f=i;//0xc3790000，-249.0
    //printf("i=%d, f=%f\n", i, f);

    //浮点到整形
    //mov    $0x40e00000,%eax
    //mov    %eax,-0x4(%ebp)
    f=7.0;//浮点为整数，0x40e00000，7.0
    //mov    %eax,-0x4(%ebp)
    //flds   -0x4(%ebp)
    //fnstcw -0x12(%ebp)
    //movzwl -0x12(%ebp),%eax
    //mov    $0xc,%ah
    //mov    %ax,-0x14(%ebp)
    //fldcw  -0x14(%ebp)
    //fistpl -0x8(%ebp)
    //fldcw  -0x12(%ebp)
    i=f;//0x00000007，7
    //printf("i=%d, f=%f\n", i, f);
    //mov    $0x40f00000,%eax
    f=7.5;//浮点为小数，0x40f00000，7.5
    //mov    %eax,-0x4(%ebp)
    //flds   -0x4(%ebp)
    //fldcw  -0x14(%ebp)
    //fistpl -0x8(%ebp)
    //fldcw  -0x12(%ebp)
    i=f;//0x00000007，7
    //printf("i=%d, f=%f\n", i, f);
}


void int2char()
{//长到短的只管截断就行了
    //长的有符号
    //movl   $0x7f7,-0xc(%ebp)
    int i=0x7F7;//正数，2039
    //mov    -0xc(%ebp),%eax
    //mov    %al,-0x6(%ebp)
    char c=i;//0xf7，-9
    //mov    -0xc(%ebp),%eax
    //mov    %al,-0x5(%ebp)
    unsigned char uc=i;//0xf7，247
    //printf("c=%p, uc=%p\n", c, uc);//没意义因为传参后会补成32位
    //movl   $0x800007f7,-0xc(%ebp)
    i=0x800007F7;//负数，-2147481609
    //mov    -0xc(%ebp),%eax
    //mov    %al,-0x6(%ebp)
    c=i;//0xf7，-9
    //mov    -0xc(%ebp),%eax
    //mov    %al,-0x5(%ebp)
    uc=i;//0xf7，247

    //长的无符号
    //movl   $0x7f7,-0x4(%ebp)
    unsigned int ui=0x7F7;
    //mov    -0x4(%ebp),%eax
    //mov    %al,-0x6(%ebp)
    c=ui;//0xf7
    //mov    -0x4(%ebp),%eax
    //mov    %al,-0x5(%ebp)
    uc=ui;//0xf7
    //movl   $0x800007f7,-0x4(%ebp)
    ui=0x800007F7;//高位为1
    //mov    -0x4(%ebp),%eax
    //mov    %al,-0x6(%ebp)
    c=ui;//0xf7
    //mov    -0x4(%ebp),%eax
    //mov    %al,-0x5(%ebp)
    uc=ui;//0xf7
}


void char2int()
{
    //短的有符号，符号扩展，movsbl就是符号扩展
    //movb   $0x7,-0x15(%ebp)
    char c=0x07;//正数，7
    //movsbl -0x15(%ebp),%eax
    //mov    %eax,-0x14(%ebp)
    int i=c;//0x07，7
    //movsbl -0x15(%ebp),%eax
    //mov    %eax,-0x10(%ebp)
    unsigned ui=c;//0x07，7
    //printf("c=%d, i=%d, ui=%u\n", c, i, ui);
    //movb   $0x87,-0x15(%ebp)
    c=0x87;//负数，-121
    //movsbl -0x15(%ebp),%eax
    //mov    %eax,-0x14(%ebp)
    i=c;//0xffffff87，-121
    //movsbl -0x15(%ebp),%eax
    //mov    %eax,-0x10(%ebp)
    ui=c;//0xffffff87，4294967175，只有这个表达可能有误
    //printf("c=%d, i=%d, ui=%u\n", c, i, ui);

    //短的无符号，前面添0，movzbl是零扩展
    //movb   $0x7,-0x9(%ebp)
    unsigned char uc=0x07;//正数，7
    //movzbl -0x9(%ebp),%eax
    //mov    %eax,-0x14(%ebp)
    i=uc;//0x07，7
    //movzbl -0x9(%ebp),%eax
    //mov    %eax,-0x10(%ebp)
    ui=uc;//0x07，7
    //printf("c=%u, i=%d, ui=%u\n", c, i, ui);
    //movb   $0x87,-0x9(%ebp)
    uc=0x87;//高位为1，135
    //movzbl -0x9(%ebp),%eax
    //mov    %eax,-0x14(%ebp)
    i=uc;//0x87，135
    //movzbl -0x9(%ebp),%eax
    //mov    %eax,-0x10(%ebp)
    ui=uc;//0x87，135
    //printf("c=%u, i=%d, ui=%u\n", c, i, ui);
}

int main(int argc, char *argv[])
{
    char2int();
    int2char();
    int2float();
    return 0;
}

