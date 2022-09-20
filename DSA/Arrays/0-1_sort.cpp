#include <iostream>
using namespace std;
void Sort(int arr[],int size)
{
    int i=0,j=size-1;

    while (i<j)
    {
        while(arr[i]==0)
        {
            i++;
        }
        while(arr[j]==1)
        {
            j--;
        }
        while(arr[i]==1 && arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10] = {1, 0, 1, 0, 0, 1, 1, 0, 1, 1};

    Sort(arr,10);

    printArray(arr, 10);
}
