#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
//     cout<<arr[n-1];
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>arr[i+1])
//         {
//             int temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;
//         }
//         // if(i==(n-1))
//         //cout<<arr[i];
//     }
//    // cout<<arr[(n-1)];
// //    for (int i = 0; i < n; i++)
// //    {
// //        if(i==n-1)
// //        cout<<arr[i]<<" ";
// //    }

// by use of max() fun

    int mx=0;
    for (int i = 0; i < n; i++)
    {
        mx=max(mx,arr[i]);
    }
    
   cout<<mx<<endl;
    return 0;
}