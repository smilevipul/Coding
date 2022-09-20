#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;
    // list<int> n(l);

    list<int > m(5,100);
    

    l.push_back(1);
    l.push_back(2);

    for(int i:l) {
        cout<<i<<" ";
    }

    list<int> n(l); // coping list of element of l in n
 
 cout<<"\nafter coping\n";
    for(int i:n) {
        cout<<i<<" ";
    }
 
 cout<<"\elements of m list\n";
    for(int i:m) {
        cout<<i<<" ";
    }

    cout<<endl;

    l.erase(l.begin());

    cout<<"after erase\n";

    for(int i:l){
        cout<<i<<endl;
    }

    cout<<"Size of list "<<l.size()<<endl;

}