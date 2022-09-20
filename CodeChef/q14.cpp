#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int max(int *arr, int size)
{
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    return maxi;
}

int min(int *arr, int size)
{
    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }

    return mini;
}

int gcd(int a, int b)
{
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int maxi = max(arr, n);
        int mini = min(arr, n);

        int rep = gcd(maxi, mini);

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != maxi)
            {
                sum += arr[i];
            }
        }

        cout << (sum + rep) << endl;
    }
    return 0;
}
