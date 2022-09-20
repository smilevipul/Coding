#include <iostream>
using namespace std;

int main()
{
    // int a=10;
    // int *ptrA=&a;
    int arr[] = {3, 4, 6, 7};
   // int *ptr = arr;
    for (int i = 0; i < 4; i++)
    {
        cout << *(arr+i) << endl;
        arr;
    }

    // cout<<*arr;
    // cout<<arr;
}