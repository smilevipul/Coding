#include<iostream>
using namespace std;

// void update1(int n)
// {
//     n++;
// }
void update2(int &n)
{
    n++;
}

int main()
{
    // int i = 5;
    // int &j = i; // making reference variable

    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;

    int n = 5;
    cout<<"Before"<<n<<endl;

    update2 (n);
    cout<<"After"<<n<<endl;


    return 0;

}