#include <bits/stdc++.h>
using namespace std;

// #define PI = 4.14

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin>>n;
        pair<int, int> p[n];
        for (int i = 1; i <= n; i++)
        {
            p[i] = {i, i};
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     cout<<p[i].first<< " "<<p[i].second<<endl;
        // }

        int count = 0;
        for (int i = 1; i <= n; i++)
        {          
            for (int j = 1; j <= n; j++)
            {
                // int second = j;

                if ((p[i].first + p[j].first) % 2 != 0)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
