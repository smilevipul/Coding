#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int s;
    cin >> s;

    // Brute Force Method

    // for (i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (j = i; j < n; j++)
    //     {
    //         sum = sum + arr[j];
    //         if (sum == s)
    //         {
    //             for (int i = 0; i <= j; i++)
    //             {
    //                 cout << arr[i] << " ";

    //             }
    //             return 0;
    //         }
    //     }
    // }

    // correct apporoch

    i = 0;
    j = 0;
    int st = -1, en = -1, sum = 0;

    while (j < n && sum + arr[j] <= s)
    {
        sum += arr[j];
        j++;
    }
    if (sum == s)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }

    while (j < n)
    {
        sum += arr[j];
        while (sum > s)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }

    cout << st << " " << en << endl;

    return 0;
}