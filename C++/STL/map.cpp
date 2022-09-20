#include<iostream>
#include<map>
using namespace std;

int main()
{
    map <int , string> m;

    m[1] =" Vipul";
    m[2] = "Kumar";
    m[3] = "Vishal";
    
    m.insert({5,"Bhim"});
    for(auto i:m)
    {
        cout<<i.first<<endl;
    }

    cout<<"before erase\n";
    for(auto i:m)
    {
        cout<<i.first<<i.second<<endl;
    }
     
     // m.erase(5);
     cout<<"after erase\n";
    for(auto i:m)
    {
        cout<<i.first<<i.second<<endl;
    }

    auto it = m.find(5);

    for(auto i = it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }


}