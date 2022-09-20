#include <bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;

class Hero
{

private:
    int health;

public:
    char level;
    string name;
    static int timeToComplete;

    Hero()
    {
       cout<<"Constructor Called\n";
    }
    
    // Parameterised Constructor
    Hero(int health)
    {
        cout<< "this ->"<<this<<endl;
        cout<<"This is "<<this<<endl;
        this -> health = health;
    }
    Hero(int health,char level)
    {
        this->health = health;
        this->level = level;
    }

    // Copy Constructor
    Hero(Hero &temp)
    {
        cout<<"Copy constructor  called\n";
        this->health = temp.health;
        this->level = temp.level;
    }
    //Destructor
    ~Hero()
    {
        cout<<"Destructor Bhai called\n";
    }

    void Print()
    {
        cout<<"Level "<<this->level<<endl;
        cout<<"Health "<<this->health<<endl;
        
    }

    // static function can access only static memebers
    static int random()
    {
        return timeToComplete;
    }
    // gatters
    int getHealth()
    {
        return health;
    }

    //setters
    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int Hero::timeToComplete = 300000; 
int main()
{



    cout<<Hero::timeToComplete<<endl; 


    // cout<<Hero::timeToComplete<<endl;
    // Hero a;
    // cout<<a.timeToComplete<<endl;

    // Hero b;
    // b.timeToComplete =10;
    // cout<<b.timeToComplete<<endl; 

    // Hero a; // Statically

    // Hero *b = new Hero(); //Dynamically
    // // For dynamically created object called destructor manually
    // delete b; 










    // Hero R(90,'D');
    // R.Print();

    // //Copy Constructor
    // Hero S(R);
    // S.Print();






    // static allocation
    // Hero a;
    // a.setHealth(100);
    // a.setLevel('A');
    // cout<<"Level is "<< a.level<<endl;
    // cout<<"Health is "<<a.getHealth()<<endl;

    // // Dynamically
    // Hero *b = new Hero;

    // b->setHealth(50);
    // b->setLevel('B');
    // cout<<"Level is "<<(*b).level<<endl;
    // cout<<"Health is "<<(*b).getHealth()<<endl; 



    // Hero h1; // creation of object
    // h1.name = "Prashant";
    // // h1.health = 80;
    // h1.setHealth(90);
    // h1.level = 'B';

    // cout << "Size :" << sizeof(h1) << endl;
    // cout << "Name :" << h1.name << endl;
    // // cout << "Health :" << h1.health << endl;
    // cout << "Health :" << h1.getHealth()<< endl;
    // cout << "Level :" << h1.level << endl;
    return 0;
}
