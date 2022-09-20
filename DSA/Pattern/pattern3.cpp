#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch='D';
    for (int i = 1; i <= n; i++)
    {
        
        for(int j=1;j<=i;j++)
        {
           cout<<ch<<" ";
           ch++;
        }
        ch=ch-i-1;
        cout<<endl;
    }
    return 0;
}