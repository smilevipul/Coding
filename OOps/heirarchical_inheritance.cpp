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

class Pig : public Animal{

    public:
    void speak()
    {
        cout<<"Pig is speaking\n";
    }

};
class Cat : public Animal{
    public:
    void speak()
    {
        cout<<"Cat is speaking\n";
    }

};
class Goat : public Animal{
    public:
    void speak()
    {
        cout<<"Goat is speaking\n";
    }

};


int main()
{

    Pig p;
    p.Speak();
    p.speak();
    Cat c;
    c.Speak();
    c.speak();
    Goat g;
    g.Speak();
    g.speak();

}