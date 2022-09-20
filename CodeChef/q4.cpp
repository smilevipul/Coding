#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        pair <int, int> p;
        int n;
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            p.first = i;
            p.second = i;
        }
                                    
       for (int i = 1; i <= n; i++)
        {
           cout<<p.first<<" "<<p.second<<endl;
        }

        // int count = 0;
        // for (int i = 1; i <= n; i++)
        // {
        //     int first = i;
        //     for (int j = 1; j <= n; j++)
        //     {
        //         int second = j;

        //         if ((p.first + p.second) % 3 == 0)
        //         {
        //             count++;
        //         }
        //     }
        // }
        // cout << count << endl;
    }
    return 0;
}
