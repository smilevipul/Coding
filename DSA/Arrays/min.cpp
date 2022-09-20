#include <iostream>
using namespace std;
int getMin(int a[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    return min;
}
int getMax(int a[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int n;
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout<<getMin(a,n)<<endl;
    cout<<getMax(a,n)<<endl;
}