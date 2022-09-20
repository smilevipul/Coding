#include <iostream>
using namespace std;

void swap(int a[])
{
    for (int i = 0; i < 5; i = i + 2)
    {
        if (i+1<5)
        {
            // int temp = a[i];
            // a[i] = a[i + 1];
            // a[i + 1] = temp;

            swap(a[i],a[i+1]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    // cout<<sizeof(a)<<endl;
    swap(a);
    return 0;
}