#include<iostream>
using namespace std;


int main()
{
    int arr[5]={1,7,4,3,9};
    for(int i=0;i<5;i++)
    {
        for(int j =i +1;j<5;j++ )
        {
            if(arr[j]<arr[i])
            {
                swap(arr[i],arr[j]);
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}