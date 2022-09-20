#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    vector <int > v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);

    cout<<"FInding six ->"<<binary_search(v.begin(),v.end(),7)<<endl;
    cout<<"Lower bond"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper bond"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;


    int a = 5;
    int b = 67;
     cout<<" Max - "<<max(5,67)<<endl;
     cout<<"min_-"<< min(5,76)<<endl;

     swap(a,b);

     cout<< "a = "<<a<<" b = "<<b<<endl;

     string st = "abcdef";
     reverse(st.begin(),st.end());
     cout<<"string - >"<<st<<endl;

     rotate(v.begin(),v.begin()+1,v.end());

     cout<<"after rotation\n";

     for (int i :v)
     {
        cout<<i<<" ";
     }
     cout<<"after sorting\n";
     sort(v.begin(),v.end());

    for (int i :v)
     {
        cout<<i<<" ";
     }

}