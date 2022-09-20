#include<iostream>
using namespace std;


int score = 21; // creating global variable

void a()
{
    cout<<"In a "<<score<<endl;
}

void b()
{
    cout<<"In b "<<score<<endl;
}

int main()
{

    cout<<"In main "<<score<<endl;
    a();
    b();
}