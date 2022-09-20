#include <iostream>
using namespace std;
 void rotate(int arr[],int n)
 {
     for(int i=n;i>=0;i--)
     {
         if((i-2)>=0)
         {
             swap(arr[i],arr[i-2]);
         }
         else
         {
             swap(arr[i],arr[i-2+n]);
         }
             
     }
 }
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main() {
    //Write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    rotate(arr,n);
    print(arr,n);

    return 0;
}