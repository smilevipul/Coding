#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[5];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n/2; i++)
    {
        // int temp=arr[i];
        // arr[i]=arr[n-i-1];
        // arr[n-i-1]=temp;

        swap(arr[i],arr[n-i-1]);
    }
    

      for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }  
}