#include<iostream>
using namespace std;
class Human{
    public :
    int height;
    int weight;
    int age;

    public:
    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human {
    public:
    string color;

    void sleep()
    {
        cout<<"Man is sleepig\n";
    }
};

int main()
{
    Male obj1;
    cout<<obj1.color<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.age<<endl;

    obj1.sleep();
    obj1.setWeight(55);
    cout<<obj1.weight<<endl;
    return 0;
}