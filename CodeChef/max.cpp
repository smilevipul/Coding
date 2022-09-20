#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};

    int maxi = INT_MIN;

    for (int  i = 0; i < 5; i++)
    {
        maxi = max(maxi,arr[i]);

        // if(arr[i]<mini)
        // {
        //     mini = arr[i];
        // }
    }

    cout<<maxi<<endl;
    
}