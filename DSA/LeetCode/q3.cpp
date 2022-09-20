#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    int ans=1;
    while (i<30)
    {
        if(n==0)
        {
            cout<<"true";
            return 0;
        }
        if(ans==n)
        {
            cout<<"true";
            return 0;
        }
        if(ans < INT_MAX/2)
         ans = ans*2;
        i++;
    }
    cout<<"false";
    return 0;
    
}