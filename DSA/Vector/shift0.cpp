#include<iostream>
using namespace  std;

void arrange(int arr[],int n)
{
    int i=0;
    for (int j = 0; j < n; j++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i],arr[j]);
            i++;
        }
    }
    
}

void print(int arr[],int size)
{
    
 for (int  i = 0; i < size; i++)
 {
     cout<<arr[i]<<" ";
 }

}



int main()
{

 int arr[6]={0,1,0,3,12,0};
 arrange(arr,6);
 print(arr,6);
 
 return 0;
} 

