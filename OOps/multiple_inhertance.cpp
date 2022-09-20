#include<iostream>
using namespace std;

class Animal{
    public :
    int noOfleg;
    // int age;
    // int weight;

    public:
    void bark()
    {
        cout<<"Animal is barking\n";
    }

};
class Human{
    public :
    int age;
    int weight;

    public:
    void Speak()
    {
        cout<<"Human is speaking\n";
    }

};

class Hybrid : public Animal,public Human{

};


int main()
{
    Hybrid  h;
    h.Speak();
    h.bark();
    h.noOfleg;
}