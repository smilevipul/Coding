#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="fam";
    string s2 ="ily";
    s1.clear();
    //s1.append(s2); // for apending

    cout<<s1+s2<<endl; // for direct concatenation
    //cout<<s1;

    cout<<s1[2];
}