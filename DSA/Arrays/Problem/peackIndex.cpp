#include<iostream>
using namespace std;

int main()
{
    int arr[5]={2,7,8 ,9,2};

    int s=0,e=4;
    int mid = s+ (e-s)/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s= mid+1;
        }
        else
        {
            e=mid;
        }
        mid = s +(e-s)/2;

    }
    cout<<s;
}