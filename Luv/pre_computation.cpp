// ------------------(Q1)

// #include<iostream>
// using namespace std;

// const int M = 1e9+7;

// const int N = 1e5 +10;

// long long fact[N];

// int main()
// {

//     fact[0]=fact[1] = 1;

//     for (int i = 2; i < N; i++)
//     {
//         fact[i] = fact[i=1]*i;
//     }

//     int t;
//     cin>>t;

//     while (t--)
//     {
//         int n;
//         cin>>n;
//         cout<<fact[n];

//         // long long fact = 1;

//         // for(int i=1;i<=n;i++)
//         // {
//         //     fact = (fact*i)%m;
//         // }

//         cout<<fact<<endl;
//     }

// }

// (Q2) Given array of N integer . Given Q queries and in each query a number x,print count that number in array


 const int N = 1e7;
 int hsh[N];

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hsh[arr[i]]++;
    }

    int q;
    cin >> q;
    
    while (q--)
    {
        int x;
        cin >> x;

        cout<<hsh[x]<<endl; // from pre-computation

        // int count = 0;

        // for (int i = 0; i < 10; i++)
        // {
        //     if (arr[i] == x)
        //     {
        //         count++;
        //     }
        // }

        // cout << count << endl;
    }
}

//complexity
// O(n)+O(q)+ O(N*q) = O(N^2)