#include <stdio.h>
int main(int argc, char *argv[])
{
    int a=1, b=2, c;
    asm (
    "movl $0, %%eax\n"                
    "addl %1, %%eax\n"                
    "addl %2, %%eax\n"                
    "movl  %%eax, %0\n"                
    :"=m"(c)
    :"c"(a), "d"(b)
    );
    printf("%d\n", c);
    return 0;
}
/*
main:
 55                   	push   %ebp
 89 e5                	mov    %esp,%ebp
 83 e4 f0             	and    $0xfffffff0,%esp
 83 ec 20             	sub    $0x20,%esp
 c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 00 
 c7 44 24 1c 02 00 00 	movl   $0x2,0x1c(%esp)
 00 
 c7 44 24 14 05 00 00 	movl   $0x5,0x14(%esp)
 00 
 8b 44 24 18          	mov    0x18(%esp),%eax
 8b 54 24 1c          	mov    0x1c(%esp),%edx
 89 c1                	mov    %eax,%ecx
 b8 00 00 00 00       	mov    $0x0,%eax
 01 c8                	add    %ecx,%eax
 01 d0                	add    %edx,%eax
 89 44 24 14          	mov    %eax,0x14(%esp)
 8b 54 24 14          	mov    0x14(%esp),%edx
 b8 e4 84 04 08       	mov    $0x80484e4,%eax
 89 54 24 04          	mov    %edx,0x4(%esp)
 89 04 24             	mov    %eax,(%esp)
 e8 e3 fe ff ff       	call   80482f4 <printf@plt>
 b8 00 00 00 00       	mov    $0x0,%eax
 c9                   	leave  
*/
