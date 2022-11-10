#include<iostream>
#include<vector>
using namespace std;

void printVec(vector <pair<int,int>> v)

{
    cout<<"Size "<<v.size()<<endl;
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
}

int main()
{
    vector <pair<int,int>> v;
    printVec(v);

    v.push_back({1,2});
    printVec(v);

}