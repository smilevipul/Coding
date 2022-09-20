#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};

    int mini = INT_MAX;

    for (int  i = 0; i < 5; i++)
    {
        // mini = min(mini,arr[i]);

        if(arr[i]<mini)
        {
            mini = arr[i];
        }
    }

    cout<<mini<<endl;
    
}