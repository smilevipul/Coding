#include<bits/stdc++.h>
using namespace std;


void printMap(unordered_map<int,string> &m)
{
    cout<<m.size()<<endl;
    for(auto &pr :m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}


int main()
{
    unordered_map<int,string> m;
    m[1]="abc"; // O(1)
    m[5]="bcd";
    m[4]="efg";

    m.insert({3,"vip"});

    // map<int ,string> ::iterator it;
    // for(it = m.begin();it!=m.end();it++)
    // {
    //     cout<<(*it).first<< " "<<(*it).second<<endl;
    // }

    auto it = m.find(7); //O(1)
    if(it != m.end())
    {
     m.erase(it);
    }

    // m.clear();

    // if(it == m.end())
    // cout<<"value is not present";
    // else{
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    printMap(m); 


}