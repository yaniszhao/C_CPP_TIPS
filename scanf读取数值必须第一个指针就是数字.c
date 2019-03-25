#include <stdio.h>
int main(int argc, char *argv[])
{
    int d;
    float f;
    //abc123abc-->0
    //abc123 abc-->0
    scanf("%d", &d);
    printf("%d\n", d); 
    
    //abc123abc-->0.000000
    //abc123 abc-->0.000000
    scanf("%f", &f);
    printf("%f\n", f); 
}
