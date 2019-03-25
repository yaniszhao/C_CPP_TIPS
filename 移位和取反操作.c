#include <stdio.h>
int main() 
{
 char b = 4;//0000 0100
 char a = ~(b<<2);//b<<2 ==>0001 0000 取反 11101111即-17
 printf("%d\n", a);//-17
}
