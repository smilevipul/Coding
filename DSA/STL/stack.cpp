#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("Vipul");

    s.push("Kumar");
    s.push("Vishal");

    cout<<s.top()<<endl;

    s.pop();

    cout<<s.top()<<endl;

    cout<<s.size()<<endl;




}