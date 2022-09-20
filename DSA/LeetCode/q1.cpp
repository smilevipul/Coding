#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;

    while (n != 0)
    {
        int digit = n % 10;
        if ((ans > INT_MAX / 10) && (ans < INT_MIN / 10))
        {
            cout << 0 << endl;
            return 0;
        }
        else
        {
            ans = digit + ans * 10;
            n = n / 10;
        }

    }
    cout<<ans;
}