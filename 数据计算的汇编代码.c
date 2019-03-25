#include <stdio.h>

void int_float_compute()
{
    //mov    $0x40c66666,%eax
    //mov    %eax,-0x18(%ebp)
    float f1=6.2;
    //movl   $0x3,-0x14(%ebp)
    int i1=3;
    //movb   $0x8,-0xd(%ebp
    char c1=8;
    //movsbl -0xd(%ebp),%eax
    //imul   -0x14(%ebp),%eax
    //mov    %eax,-0xc(%ebp)
    int i2=i1*c1;
    //fildl  -0xc(%ebp)
    //fadds  -0x18(%ebp)
    //fstps  -0x8(%ebp)
    float f2=f1+i2;
    //fildl  -0xc(%ebp)
    //fmuls  -0x18(%ebp)
    //fstps  -0x4(%ebp)
    float f3=f1*i2;
}

void float_compute()
{
    //mov    $0x40c66666,%eax
    //mov    %eax,-0x18(%ebp)
    //mov    $0x40a9999a,%eax
    //mov    %eax,-0x14(%ebp)
    float f1=6.2, f2=5.3;
    //flds   -0x18(%ebp)
    //fadds  -0x14(%ebp)
    //fstps  -0x10(%ebp)
    float f3=f1+f2;
    //flds   -0x18(%ebp)
    //fsubs  -0x14(%ebp)
    //fstps  -0xc(%ebp)
    float f4=f1-f2;
    //flds   -0x18(%ebp)
    //fmuls  -0x14(%ebp)
    //fstps  -0x8(%ebp)
    float f5=f1*f2;
    //flds   -0x18(%ebp)
    //fdivs  -0x14(%ebp)
    //fstps  -0x4(%ebp)
    float f6=f1/f2;
    //float f7=f1%f2; //浮点数不能求余
    //float f8=f1^f2; //浮点数不能用位运算
}


void int_compute()
{   
    //movl   $0x6,-0x1c(%ebp)
    //movl   $0x5,-0x18(%ebp)
    int i1=6, i2=5;
    //mov    -0x18(%ebp),%eax
    //mov    -0x1c(%ebp),%edx
    //lea    (%edx,%eax,1),%eax
    //mov    %eax,-0x14(%ebp)
    int i3=i1+i2;
    //mov    -0x18(%ebp),%eax
    //mov    -0x1c(%ebp),%edx
    //mov    %edx,%ecx
    //sub    %eax,%ecx
    //mov    %ecx,%eax
    //mov    %eax,-0x10(%ebp)
    int i4=i1-i2;
    //mov    -0x1c(%ebp),%eax
    //imul   -0x18(%ebp),%eax
    //mov    %eax,-0xc(%ebp)
    int i5=i1*i2;
    //mov    -0x1c(%ebp),%eax
    //mov    %eax,%edx
    //sar    $0x1f,%edx //sar算术右移指令
    //idivl  -0x18(%ebp)
    //mov    %eax,-0x8(%ebp)
    int i6=i1/i2;
    //mov    -0x1c(%ebp),%eax
    //mov    %eax,%edx
    //sar    $0x1f,%edx
    //idivl  -0x18(%ebp)
    //mov    %edx,-0x4(%ebp)
    int i7=i1%i2;
    //异或是后面加的，栈的地址对不上无所谓，关键看指令
    //mov    -0x1c(%ebp),%eax
    //mov    -0x20(%ebp),%edx
    //xor    %edx,%eax
    //mov    %eax,-0x4(%ebp)
    int i8=i1^i2;
}


void char_compute()
{
    //movb   $0x6,-0x7(%ebp)
    //movb   $0x5,-0x6(%ebp)
    char c1=6, c2=5;
    //movzbl -0x7(%ebp),%edx
    //movzbl -0x6(%ebp),%eax
    //lea    (%edx,%eax,1),%eax
    //mov    %al,-0x5(%ebp)
    char c3=c1+c2;
    //movzbl -0x7(%ebp),%edx
    //movzbl -0x6(%ebp),%eax
    //mov    %edx,%ecx
    //sub    %al,%cl
    //mov    %ecx,%eax
    //mov    %al,-0x4(%ebp)
    char c4=c1-c2;
    //movzbl -0x6(%ebp),%edx
    //movzbl -0x7(%ebp),%eax
    //imul   %edx,%eax
    //mov    %al,-0x3(%ebp)
    char c5=c1*c2;
    //movsbl -0x7(%ebp),%eax
    //movsbl -0x6(%ebp),%edx
    //mov    %edx,-0x14(%ebp)
    //mov    %eax,%edx
    //sar    $0x1f,%edx
    //idivl  -0x14(%ebp)
    //mov    %al,-0x2(%ebp)
    char c6=c1/c2;
    //movsbl -0x7(%ebp),%eax
    //movsbl -0x6(%ebp),%ecx
    //mov    %eax,%edx
    //sar    $0x1f,%edx
    //idiv   %ecx
    //mov    %edx,%eax
    //mov    %al,-0x1(%ebp)
    char c7=c1%c2;

}

int main(int argc, char *argv[])
{
    char_compute();
    int_compute();
    float_compute();
    int_float_compute();
    return 0;
}

