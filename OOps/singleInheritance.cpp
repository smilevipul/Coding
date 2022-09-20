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


int main()
{
    Dog d1;
    d1.Speak();
    d1.age;
}