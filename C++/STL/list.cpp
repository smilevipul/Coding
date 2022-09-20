#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int > l;

    list<int > n(5,100);

    l.push_front(2);
    l.push_front(4);

    for( int i :l)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"size before erase->"<<l.size()<<endl;

    l.erase(l.begin());

    cout<<"size after erase->"<<l.size()<<endl;

    
    for( int i :n)
    {
        cout<<i<<" ";
    }
}