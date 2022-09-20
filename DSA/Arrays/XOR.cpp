#include<iostream>
using namespace std;

int main()
{
    int arr[100];

    for (int i = 0; i <7; i++)
    {
        cin>>arr[i];
    }
    int ans=0;

    for (int i = 0; i < 7; i++)
    {
        ans =ans^arr[i];
    }

    for (int i = 0; i < 7; i++)
    {
        ans =ans^i;
    }
    cout<<ans; 
}