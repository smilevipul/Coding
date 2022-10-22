#include<iostream>
#include<vector>
using namespace std;

void printVec(vector <int> &v)

{
    cout<<"Size "<<v.size()<<endl;
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    v.push_back(2);
    
}

void printS(vector <string> s)
{
    cout<<"Size "<<s.size()<<endl;
    
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<" ";
    }

    
}

int main()
{
    vector<int > v;

    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    //     cout<<"Size"<<v.size()<<endl;
    // }

    // vector <int > v(10); // making vector size pre defind 
    // vector <int > v(10,6); // making with size and inilize values

    v.push_back(6);
    v.push_back(7);

    vector <int> v2 =v;//copy the value of vector
     printVec(v2);
    // v.pop_back();
    cout<<endl;
    printVec(v2);

    vector <string> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin>>a;
        s.push_back(a);
    }
    
    printS(s);


}