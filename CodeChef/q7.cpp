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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n % 2 == 0)
        {
            cout << "Yes\n";
        }
        else
        {
            int flag = 0;

            for (int i = 0; i < n; i++)
            {
                // int temp = i;
                for (int j = i + 1; j < n; j++)
                {
                    if (arr[i] == arr[j])
                    {

                        cout << "Yes\n";
                        flag++;
                        // break;
                    }
                    cout<<flag<<endl;
                    if(flag == 1)
                    {
                        break;
                    }
                   
                }
               
            }
            // cout<<flag<<endl;
            if (flag == 0)
            {
                cout << "No\n";
            }
            // else
            // {
            //     cout << "Yes\n";
            // }
        }
    }
    return 0;
}
