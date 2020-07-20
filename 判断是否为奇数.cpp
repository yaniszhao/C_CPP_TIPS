#include <iostream>
int main(int argc, char **argv)
{
    int a=3;
    if (a&1) std::cout<<"odd"<<std::endl;
    else std::cout<<"even"<<std::endl;
    return 0;
}
