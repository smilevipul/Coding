#include <iostream>
#include <climits>
using namespace std;

// int max(int arr[], int size)
// {
//     int maxi = INT_MIN;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > maxi)
//         {
//             maxi = arr[i];
//         }
//     }

//     return maxi;
// }

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int maxi = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            maxi = max(arr[i],maxi);
        }

        cout << maxi<<endl;
    }
    return 0;
}