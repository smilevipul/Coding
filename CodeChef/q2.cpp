#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, month = 0, j = 1;
        cin >> x >> y;
        if (x > y)
        {
            cout << "0\n";
        }
        else
        {
            while ((x * j) < y)
            {
                month++;
                j++;
            }
            cout << month << endl;
        }
    }
    return 0;
}
