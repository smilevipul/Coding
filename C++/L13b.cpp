#include<iostream>
using namespace std;

int main()
{
    int n,rem,reverse=0;
    cin>>n;
    // for(int i=1;i<=4;i++)
    // {
    //     rem=n%10;
    //     n=n/10;
    //     reverse=(reverse*10+rem);
    // }
    // cout<<reverse;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        reverse=reverse*10 + rem;
    }
    cout<<reverse;
    return 0;
}
