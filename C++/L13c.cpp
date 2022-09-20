#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int orig=n;
    while (n>0)
    {
        int lastdigit=n%10;
        n=n/10;
        sum += pow(lastdigit,3);
    }
    if(sum==orig)
    cout<<"Armstrong";
    else cout<<"Not Armstrong";
    return 0;
}