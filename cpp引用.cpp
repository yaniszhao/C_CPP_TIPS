#include <iostream>
using namespace std;

void ModVal(int* &p)
{
	cout<<hex<<p<<endl;//0x7ffee28f2a38
	cout<<hex<<&p<<endl;//0x7ffee28f2a30
	p = (int*)0x00112233;
}

int main()
{//cpp引用，相当于对原来那个变量做操作，而不是简单从传参的角度操作
	int a;
	int *p = &a;
	cout<<hex<<p<<endl;//0x7ffee28f2a38
	cout<<hex<<&p<<endl;//0x7ffee28f2a30
	ModVal(p);
	cout<<hex<<p<<endl;//0x112233
	cout<<hex<<&p<<endl;//0x7ffee28f2a30
	return 0;
}
