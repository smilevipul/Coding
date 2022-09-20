#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int w, x, y, z;
        cin >>w>>x >> y >> z;

        if ((w == x) || (w == y) || (w == z) || (w == (x + y)) || (w == (y + z)) || (w == (z + x)) || (w == (x + y + z)))
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
