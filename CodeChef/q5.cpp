#include <bits/stdc++.h>
using namespace std;
 
void solve(){
 int x,y;
cin>>x>>y;

int k=y/x;
int r=k*x;
if(x<y && (k*x)<y)
{
    cout<<k<<endl;
}
else if (x<y &&  r==y)
{cout<<(k-1);
}
 else 
{
    cout<<0<<endl;
}
 
 cout<<endl;}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}