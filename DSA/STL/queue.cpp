#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Vipul");
    q.push("Kumar");
    q.push("Vishal");

     cout<<"Size: "<<q.size()<<endl;

    cout<<"First Element: "<<q.front()<<endl;

    q.pop();
    cout<<"First Element: "<<q.front()<<endl;

    cout<<"Size: "<<q.size()<<endl;
}