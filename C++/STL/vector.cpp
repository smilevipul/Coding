#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<int> v; //initilization
    vector <int > a(5,1);
    

    cout<<"Capacity-"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity-"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity-"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity-"<<v.capacity()<<endl;

    cout<<"element AT 2-"<<v.at(2)<<endl;

    cout<<"Bfore Pop_"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<"after pop_";
    v.pop_back();
        for(int i:v)
    {
        cout<<i<<" ";
    }

    cout<<"\nSize Before clear_"<<v.size()<<endl;

    v.clear();
    cout<<v.size()<<endl;




}