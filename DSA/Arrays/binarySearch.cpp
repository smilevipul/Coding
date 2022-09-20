#include <iostream>
using namespace std;
int binarySearch(int arr[], int size,int key)
{
    cout<<"All is good\n";
    int s = 0, e = size - 1;
    //  int mid = (s+e)/2; // when we use this fomula we can face integer range exceed type error
    int mid = (s + (e - s) / 2); // for fixing integer range exceed type error we use this formula
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
            cout<<"All is bad\n";
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    cout << "Enter elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element that u want search in array:";
    int key;
    cin >> key;

    int index=binarySearch(arr, n,key);

    cout<<index;

    return 0;
}