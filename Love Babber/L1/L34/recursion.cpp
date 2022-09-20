#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{   // Base Case
    if(n==0)
    {
        return 1;
    }

    int smallProb = factorial(n-1); // recusive relation
    int bigProb = n*smallProb;
    return bigProb;
}

int main()
{
    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;
}