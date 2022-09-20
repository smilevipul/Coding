#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    // method 1

    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //         count++;
    // }
    // if (count > 2)
    //     cout << "Prime";
    // else
    //     cout << "Not Prime";

    // method 2
    bool flag;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"Not Prime";
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"Prime";
    return 0;
}