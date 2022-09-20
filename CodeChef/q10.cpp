#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int maxi = max(a, b);
        maxi = max(maxi, c);
        int mini = min(a, b);
        mini = min(mini, c);

        if (b <= maxi && c >= mini && a >= mini)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}