#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> v; // initiliazation
    vector<int> a(5,2); // 2nd method of initialization
        for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<"\nAfeter coping\n";
    vector<int> last(a); // copy data of vector a
    for(int i:last)
    {
        cout<<i<<" ";
    }
    
    cout<<"\nCapacity->"<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capacity->"<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"Capacity->"<<v.capacity()<<endl;
    v.push_back(7);
    cout<<"Capacity->"<<v.capacity()<<endl;

    cout<<"Size->"<<v.size()<<endl;
    cout<<"elemet at 2nd index "<<v.at(2)<<endl;

    cout<<"Front->"<<v.front()<<endl;
    cout<<"Back->"<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }

    v.pop_back();

    cout<<"\nafter popback"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }

    cout<<"Before clear\n";
    cout<<"Capacity->"<<v.capacity()<<endl;

    cout<<"Size->"<<v.size()<<endl;

    v.clear();
    cout<<"After clear\n";
    cout<<"Capacity->"<<v.capacity()<<endl;

    cout<<"Size->"<<v.size()<<endl;

}