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
        cout<<i<<" ";
    }

    cout<<"\n";
    // d.pop_back();
    // d.pop_front();

    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }

    cout<<d.at(1)<<endl; // accessing element
    cout<<d.at(0)<<endl; // accessing element

    cout<<d.front()<<endl; // accessing front element
    cout<<d.back()<<endl; // accessing back element


    cout<<d.empty()<<endl; // checking empty

    cout<<d.size()<<endl; // calculating size

    d.erase(d.begin(),d.begin()+1);
    cout<<d.size()<<endl; // size after erasing

    for(int i:d)
    {
        cout<<i<<" ";
    }


}