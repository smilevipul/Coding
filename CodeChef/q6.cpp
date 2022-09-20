#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[n];
        cin >> s;

        int flag = 0;
        int count = 0;

        for (int j = 0; j < n; j++)
        {

            if (s[j] != 'a' || s[j] != 'e' || s[j] != 'i' || s[j] != 'o' || s[j] != 'u')
            {
                flag++;
                cout<<flag<<" ";
                continue;
            }
            cout<<flag<<endl;;
            if (flag >= 4)
            {
                cout << "No\n";
                count++;
            }
            flag == 0;
        }
        if (count == 0)
        {
            cout << "Yes\n";
        }
    }
    return 0;
}
