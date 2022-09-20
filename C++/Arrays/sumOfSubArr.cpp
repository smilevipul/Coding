#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0,sumtot=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sumtot += sum;
        sum=0;
        for (int j = i; j < n ; j++)
        {
            sum = sum+arr[j];
            cout<<sum<<endl;
        }
    }
    cout << sumtot << endl;
    return 0;
}