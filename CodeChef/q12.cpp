#include <iostream>
#include <string>
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
        int *arr = new int[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                count++;
            }
        }

        cout << count << endl;

        cout << "Your mini ";

        int mini = INT_MAX;

        for (int i = 1; i <= count; i++)
        {
            // mini = min(mini, arr[i]);
            if (arr[i] < mini)
            {
                mini = arr[i];
            }
        }

        cout << mini << endl;
    }
    return 0;
}