#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    char s[n+1];
    cin>>s;
    bool check=1;
    for (int i = 0; i < n; i++)
    {
        if(s[i] !=s[n-1-i])
        {
            check=0;
            break;
        }
    }
    
    if(check==1)
    {
        cout<<"Word is pelindrome\n";
    }else
    cout<<"Word is not a pelindrome\n";

    return 0;
}