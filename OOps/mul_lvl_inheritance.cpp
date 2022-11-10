#include<iostream>
using namespace std;

class Animal{
    public :
    int noOfleg;
    int age;
    int weight;

    // public:
    void Speak()
    {
        cout<<"Animal is speaking\n";
    }
    

};

class Dog : public Animal{
    public:
    void speak()
    {
        cout<<"Dog is barking";
    }
   

};
class Cat : public Animal{
    public :
    void speak()
    {
        cout<<"Cat is speaking";
    }
   

};

class Libra : public Dog{

};
class Hybrid : public Dog,public Animal{

};


int main()
{
    Libra l;
    
    l.Speak();


    l.age;
}