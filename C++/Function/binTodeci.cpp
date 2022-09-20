#include<iostream>
using namespace std;
int binTodeci(int n)
{
    int x=1,ans=0;
    while (n>0)
    {
        int lastdigit=n%10;
        ans= ans+x*lastdigit;
        x =x*2;
        n=n/10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<binTodeci(n)<<endl;
}