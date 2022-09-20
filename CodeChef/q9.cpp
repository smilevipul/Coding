#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (n == k)
        {
            if (n == 1 && k == 1)
                cout << "Yes\n";
            else
            {
                cout << "No\n";
            }
        }

        else if (n < k)
            cout << "NO\n";
        else if (n >= 2 * k)
            cout << "Yes\n";           
        else if(k>=n/2)
        cout<<"No\n";
    }
    return 0;
}


