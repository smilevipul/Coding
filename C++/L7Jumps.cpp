#include <iostream>
using namespace std;

int main()
{
    // break and continue
    // ex 1
    // int vipulmoney = 1500;
    // for (int day = 0; day < 30; day++)
    // {

    //     if (day % 2 == 0)
    //     {
    //         continue;
    //     }
    //     if (vipulmoney == 0)
    //     {
    //         break;
    //     }
    //     cout << "Go out today\n";
    //     vipulmoney=vipulmoney-300;
    // }
    // ex 2
    // for (int i = 0; i <= 100; i++)
    // {   if (i%3==0)
    // {
    //     continue;
    // }

    //     cout<<i<<" ";
    // }

    // ex 3
    // int n, count = 0;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         count++;
    //     }
    // }
    // if (count<=2)
    // {
    //     cout << "Given number is prime\n";
    // }else
    // {
    //     cout<<"Not prime\n";
    // }
    // int a, b;
    // cin >> a >> b;
    // for (int i = a; i < b; i++)
    // {
    //     int count = 0;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             count++;
    //         }
    //     }
    //     if (count <= 2)
    //     {
    //         cout << i << " ";
    //     }
    // }
    // int n, i;
    // cin >> n;
    // for (i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "Non prime\n";
    //         break;
    //     }
    // }
    // if (i == n)
    // {
    //     cout << "prime\n";
    // }
    int a, b, i, j;
    cin >> a >> b;
    for (i = a; i <= b; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            cout << i << " ";
        }
        }
    return 0;
}