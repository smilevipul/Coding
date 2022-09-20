#include<iostream>
using namespace std;

void print(int arr[],int n,int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
   int arr[] = {1,2,5,6,9,6};

   int size = 6;

   print(arr,size);

   cout<<endl;

   print(arr,size,3);


}
