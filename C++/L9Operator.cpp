#include<iostream>
using namespace std;

int main()
{
    int a,b;
   // char ch ='d';
    cin>>a>>b;
    int c=a>b?a-b:b-a; // use of ternarary operator
    cout<<c<<endl;
    cout<<&c;
    return 0;
}
