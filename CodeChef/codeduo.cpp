#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define li long long int
#define pop pop_back
#define ct cout
#define el endl

void pranay()
{
    long long int n;
    cin >> n;
    ll int arr[7];
    ll int sum = 0;

    for (int i = 0; i < 7; ++i)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    long long int quotient = n / sum;
    long long int remainder = n % sum;

    long long int k = n - (quotient * sum);

    // cout<<k<<endl;

    if (n == sum)
    {
        cout << 7 << endl;
    }

    else
    {
        for (int i = 0; i < 7; ++i)
        {
            if (k - arr[i] == 0)
            {
                cout << i + 1 << endl;
                break;
            }
            k = k - arr[i];
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        pranay();
    }
    return 0;
}