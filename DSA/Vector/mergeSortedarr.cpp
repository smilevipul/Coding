#include<iostream>
#include<vector>

using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int i=0,j=0,k=0;
    while (i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }

    while(i<n)
    {
        arr3[k]=arr1[i];
        k++;
        i++;
    }

    while (j<m)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    
}

void print(int arr[],int size)
{
    int i=0;
    while(i<size)
    {
        cout<<arr[i]<<" ";
        i++;
    }
}

int main()
{
    int arr1[]={2,6,7,9};
    int arr2[]={2,3,4,5,6};

    int arr3[9]={0};

    merge(arr1,4,arr2,5,arr3);
    
    print(arr1,9);
}