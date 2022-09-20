#include <iostream>
using namespace std;

class Box
{
public:
    double width;
    double height;
    double depth;
};

class Student
{
    string name;
    int rollNo;
    char Grade;
    int marks;

    // void Grade(int marks)
    // {
    //     if (marks >= 90)
    //         Grade = 'O';
    //     else if (marks >= 70)
    //         Grade = 'B';
    //     else if (marks >= 60)
    //         Grade = 'C';
    //     else
    //         // Grade = 'D';
    // }
};

int main()
{
    Box obj;
    obj.height = 5;
    obj.depth = 10;
    obj.width = 5;
    double volume = obj.depth * obj.height * obj.width;
    cout << volume << endl;
}