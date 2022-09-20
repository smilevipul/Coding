#include<iostream>
using namespace std;

inline int getMax(int &a,int &b)
{
    return (a>b) ? a : b;
}

int main()
{
    int a =5,b=10;

    int ans =0;

    // if(a>b)
    // {
    //     ans =a;
    // }
    // else
    // {
    //     ans = b;
    // }

    // ans = (a>b) ? a : b; // creating ternationary operater
    ans = getMax(a,b);
    cout<<ans<<endl;
    
    a = a + 10;
    b = b + 1;

    ans = getMax(a,b);
    cout<<ans<<endl;
}