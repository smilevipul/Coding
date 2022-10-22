#include<bits/stdc++.h>
using namespace std;


int main()
{
    // string str1,str2
    // cin>>str1>>str2;
    // cout<<str1<<" "<<str2<<endl;

    // getline(cin,str1);
    // cout<<str1<<endl;

    // int t;
    // cin>>t;
    // cin.ignore();
    // while (t--)
    // {
    //     string s;
    //     getline(cin,s);
    //     cout<<s<<endl;
    // }

    // q.) Reverse String 

    string s;
    cin>>s;
    string str_rev;

    for (int i = s.size(); i >=0; i--)
    {
        str_rev.push_back(s[i]);

    }
    
    cout<<str_rev<<endl;

    if(s ==str_rev)
    {
        cout<<"String is Palindrome\n";
    }
    else
    cout<<"No Palindrome\n"<<endl;


    
}