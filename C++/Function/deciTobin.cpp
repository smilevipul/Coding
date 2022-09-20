#include <iostream>
using namespace std;
int deciToBin(int n)
{
    int x = 1, ans = 0;
    while (x <= n)

        x = x * 8;
  x = x / 8;
    while (x > 0)
    {
        int lastDigit = n / x;
        n = n - lastDigit*x;
        x = x / 8;
        ans = ans * 10 + lastDigit;
    }

    return ans;
}
int deciToOct(int n)
{
    int x = 1, ans = 0;
    while (x <= n)

        x = x * 2;
    x = x / 2;
    while (x > 0)
    {
        int lastDigit = n / x;
        n = n - lastDigit*x;
        x = x / 2;
        ans = ans * 10 + lastDigit;
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;
 //   cout << deciToBin(n) << endl;
    cout << deciToOct(n) << endl;
}