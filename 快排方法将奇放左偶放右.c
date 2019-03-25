#include <stdio.h>
void OddLeftEvenRight1(int B[], int n)
{
	int low = 0;
	int high = n-1;
	int t = B[0];
	int i;
	int A[20] = {0};
	memcpy(A, B, n*4);
	for (i = 0; i < 20 ; i++)
		printf("%d  ", A[i]);
	putchar('\n');
	while (low < high) {
		for (; A[high]%2 == 0 && low < high; high--);
		if (low < high) A[low++] = A[high];//这里要判断low<high
		for (; A[low]%2 && low < high; low++);
		if (low < high) A[high--] = A[low];
	}
	A[low] = t;
	for (i = 0; i < 20 ; i++)
		printf("%d  ", A[i]);
	putchar('\n');
}

void OddLeftEvenRight2(int B[], int n)
{
	int low = 0;
	int high = n-1;
	int t = B[0];
	int i;
	int A[20] = {0};
	memcpy(A, B, n*4);
	for (int i = 0; i < 20 ; i++)
		printf("%d  ", A[i]);
	putchar('\n');
	while (low < high) {
		for (; A[high]%2 == 0 && low < high; high--);
		A[low] = A[high];//这里不用判断Low<high因为low不加1
		for (; A[low]%2 && low < high; low++);
		A[high] = A[low];
	}
	A[low] = t;
	for (int i = 0; i < 20 ; i++)
		printf("%d  ", A[i]);
	putchar('\n');
}

int main(int argc, char *argv[])
{//快排方式,将奇数放左边，偶数放右边
	int i = 20;
	int A[20] = {0};
	srandom(time());
	while (--i >= 0)
		A[i] = random()%50;
	for (i = 0; i < 20 ; i++)
		printf("%d  ", A[i]);
	putchar('\n');
	OddLeftEvenRight1(A, 20);
	OddLeftEvenRight2(A, 20);
	

}
