#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue <string> q;

    q.push("Vipul");
    q.push("Kumar");
    q.push("Vishal");

    cout<<q.front()<<endl;
    cout<<"Size before pop="<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<"Size after pop="<<q.size()<<endl;

}