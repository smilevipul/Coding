#include<iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    int count =0;
    for (int i = 0; i < size; i++)
    {
        for (int  j = 0; j < size; j++)
        {
            if(arr[i]==arr[j]&& (j != i))
            {
                count++;
            }
        }
        
    }
    
}