#include<iostream>
using namespace std;

int main()
{
    int arr[10]={2,5,7};
    int * ptr = &arr[0];

    cout<<sizeof(arr)<<endl;
    cout<<sizeof(ptr)<<endl;
}