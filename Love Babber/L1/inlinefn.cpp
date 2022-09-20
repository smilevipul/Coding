#include<iostream>
using namespace std;

inline int getMax(int &a,int &b)
{
    return (a>b)? a : b;
}

int main()
{
    int a=1,b=2;

    int ans =0;
    // if(a>b)
    // {
    //     cout<<a<<endl;
    // }
    // else
    // {
    //     cout<<b<<endl;
    // }

    ans = getMax(a,b);
    cout<<ans<<endl;
}