#include <iostream>
using namespace std;

int main()
{
    pair<int, string> p; // making pairs

    p = make_pair(2, "abc"); // initialization

    p = {2, "abcd"}; // 2nd method for initization

    // pair<int ,string> p1 = p; // by value
    pair<int, string> &p1 = p; // by reference

    p1.first = 3;

    cout << p.first << " " << p.second << endl;

    int a[]={1,2,3,4};
    int b[] ={5,6,7,8};



    pair <int ,int> p_arr[3];
    p_arr[0]={1,5};
    p_arr[1]={2,6};
    p_arr[2]={3,7};
    p_arr[3]={4,8};
    swap(p_arr[0],p_arr[3]);

    for (int i = 0; i < 4; i++)
    {
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
    }
    

}