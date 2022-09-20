#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sol O(ne2)

    // for (int i = 0; i < n; i++)
    // {
    //     int j=i+1;
    //     while (j<n)
    //     {
    //         if(arr[i]==arr[j])
    //         {
    //             cout<<arr[i];
    //             return 0;
    //         }
    //         j++;
    //     }
    // }

    // sol less than O(ne2)

    const int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minindx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minindx = min(minindx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }

    if (minindx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minindx + 1 << endl;
    }

  //  return 0;
}