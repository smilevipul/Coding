#include<iostream>
using namespace std;

class A{
    public :
    void sum()
    {
        cout<<"I'm in sum\n";
        
    }

    int sum(int x)
    {
        cout<<x+1<<endl;
        return 0;
    }

    int sum(int x,int y,int z=0)
    {
        cout<<(x+y+z)<<endl;
        return 0;
    }
};


int main()
{
    A obj;
    obj.sum();
    obj.sum(1);
    obj.sum(2,3);
    obj.sum(2,3,4);
}