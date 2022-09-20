#include<iostream>
using namespace std;


int getPivot(int a[],int size)
{
    int s=0,e=size-1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if(a[mid]>=a[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }

        mid = s + (e-s)/2;
    }
    return s;
}
int main()
{
    int a[]={3,8,10,17,1};

    cout<<getPivot(a,5);
}