#include <stdio.h>
int main(int argc, char *argv[])
{
	int i=1, j=0;
	j=i++,i++;//相当于j==i++;i++;
	printf("%d#\n",j);//1#
	printf("%d#\n",i);//3#
    i=1,j=0;//这都可以编过
    j=(i++,i++);//相当于i++;j=i++
	printf("%d#\n",j);//2#
	printf("%d#\n",i);//3#
}

