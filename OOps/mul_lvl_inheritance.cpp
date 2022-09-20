#include<iostream>
using namespace std;

class Animal{
    public :
    int noOfleg;
    int age;
    int weight;

    public:
    void Speak()
    {
        cout<<"Animal is speaking\n";
    }

};

class Dog : public Animal{

};

class Libra : public Dog{

};


int main()
{
    Libra l;
    l.Speak();
    l.age;
}