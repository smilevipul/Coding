#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack <string > s;

    s.push("Vipul");
    s.push("Kumar");
    s.push("Vishal");

    cout<<"TOP->"<<s.top()<<endl;

    s.pop();
    cout<<"TOP->"<<s.top()<<endl;

    cout<<"size-"<<s.size()<<endl;
    cout<<"Empty Or Not-"<<s.empty()<<endl;
}