


#include<iostream>
using namespace std;

// Compile time polymorphism
class Poly{
    public :
    int a;
    int b;
    int add()
    {
        return (a+b);
    }

    void operator+ (Poly &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"output "<<value2-value1<<endl;
    }

    void operator() (){
        cout<<"Me bracket hu "<<this->a<<endl;
    }

};


// Run time Polymorphism
class Animal{
    public:
    void speak()
    {
        cout<<"Speaking\n";
    }
};

class Dog : public Animal{
    public :
    //fun overrinding
    void speak(){
        cout<<"Barking\n";
    };
};

int main()
{
    Dog d;
    d.speak();


    // Poly obj1,obj2;
    // obj1.a = 4;
    // obj2.a =7;

    // obj1 + obj2;
    // obj2();

}