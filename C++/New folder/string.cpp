#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
  //  cin>>str; // for one word input

    getline(cin,str); // for input of line 
    cout<<str; 

    // or

    // string str1(5,'v');
    // cout<<str1<<endl;

    // or

    // string str2="VIPULKUMAR";
    // cout<<str2<<endl;

    return 0;
}