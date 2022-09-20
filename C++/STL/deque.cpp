#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int > d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d)
    {
        cout<<i<<endl;

    }
    cout<<"Print 1st index element ->"<<d.at(1)<<endl;
    // d.pop_back();
    // d.pop_front();
     for(int i:d)
    {
        cout<<i<<" ";
    }

    cout<<"Front->"<<d.front()<<endl;
    cout<<"Back->"<<d.back()<<endl;

    cout<<"Empty or Not->"<<d.empty()<<endl;

    cout<<"size before erase"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"size after erase"<<d.size()<<endl;



}