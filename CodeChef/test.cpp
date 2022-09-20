#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int i = 1, j = i + 1, count = 0;
        for (i = 1; i < j; i++)
        {
            for (j = i + 1; j <= n; j++)
            {
                if ((a[i] * a[j]) > 0)
                    count++;
            }
        }

        cout << count << endl;
        t--;
    }
    return 0;
}
