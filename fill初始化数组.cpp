#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{//fill操作数组
    int arr[10][10];
    fill((int*)arr, (int *)arr+10*10, 0);
    //for (auto it:arr[0]) cout<<it<<endl;
    for (int i=0; i<10; i++) cout<<arr[0][i]<<',';//0
    fill(arr[0], arr[0]+10*10, 1);
    for (int i=0; i<10; i++) cout<<arr[9][i]<<',';//1
    char  arr2[10][10];
    fill(arr[0], arr[0]+10*10, 'a');
    for (int i=0; i<10; i++) cout<<arr[9][i]<<',';//97
    return 0;
}
