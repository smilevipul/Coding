#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, i = a, j = i;
        cin >> a >> b;
        for (i = a; i < j; i++)
        {
            for (j = i; j <= b; j++)
            {
                int c = b / a;
                if (c > 1)
                {
                    cout << i << " " << j << endl;
                    break;
                }
                else
                {
                    cout << "-1\n";
                    break;
                }
            }
        }
    }
    return 0;
}
