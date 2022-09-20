#include<iostream>
using namespace std;

class A{
    public:
    void fun()
    {
        cout<<"I'm in A\n";
    }
};
class B{
    public:
   void fun()
    {
        cout<<"I'm in B\n";
    }
};
class C:public A,public B{
};


int main()
{
    C obj;
    // obj.fun();
    obj.A::fun();
    obj.B::fun();
}