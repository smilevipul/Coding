#include<iostream>
using namespace std;


int findSqrt(int n)
{
    int s=0,e=n,ans=-1;
    int mid = s+(e-s)/2;

    while(s<=e)
    {
        if(mid*mid==n)
        {
            return mid;
        }
        else if(mid*mid>n)
        {
            e=mid-1;
        }
        else
        {
            ans=mid;
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<findSqrt(n)<<endl;
}