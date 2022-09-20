#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // max heap
    priority_queue<int > maxi;

    // min-heap
    priority_queue<int ,vector<int>,greater<int> >min;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(0);
    int size = maxi.size();
    for (int i = 0; i < size; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

    cout<<endl;
    min.push(1);
    min.push(2);
    min.push(3);
    min.push(0);
    size = min.size();
    for (int i = 0; i < size; i++)
    {
        cout<<min.top()<<" ";
        min.pop();
    }

    cout<<endl;

    cout<<"Abee mini tu khali h kya?? :"<<min.empty();
    

}