#include<iostream>
using namespace std;

int score = 15;

void increase(int a)
{
    a++;
    cout<<a<<endl;

}

int main()
{
    score++;
    int i=8;
    cout<<score<<endl;
    increase(score);
    // cout<<score<<endl;
}