#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,5,7,8,4,5,23};

    for(int i=1;i<7;i++)
    {
        bool swapped = false;
        for(int j=0;j<7-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
    }

    for(int i=0; i <7; i++)
    {
        cout<<arr[i]<<" ";
    }

}