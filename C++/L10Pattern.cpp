#include<iostream>
using namespace std;

int main()
{
    // pattern 1

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<"* ";
    //     }
    //    cout<<endl; 
    // }
    
    // pattern 2
    // for (int i = 1; i <=5; i++)
    // {
    //     for (int j = 1; j <=4; j++)
    //     {
    //         if (i==1 || j==1 || i==5 || j==4)
    //         {
    //             cout<<"*";
    //         }
    //         else
    //         cout<<" ";           
    //     }
    // cout<<endl;   
    // }
    
    // pattern 3
    // int n;
    // cin>>n;
    // for (int i =0; i < n; i++)
    // {
    //     for (int j=0; j <(n-i); j++)
    //     {
    //       cout<<"* ";  
    //     }
    //   cout<<endl;  
    // }

    // pattern 4
    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int  j = 1; j <= n; j++) 
    //     {
    //         if (j<=(n-i))
    //         {
    //         cout<<"  ";
    //         }else
    //         cout<<"* ";           
    //     }
    // cout<<endl;  
    // }

    // pattern 5
    // int n,count=1;
    // cin>>n;
    // for (int i = 1; i <=n; i++)
    // {
    //  for (int j =1; j<=i; j++)
    //  {
    //      cout<<count<<" ";
    //      count++;
    //  }
    // cout<<endl; 
    // }

    // pattern 6
    int n;
    cin>>n;
    for (int i =1; i <=n; i++)
    {
        for (int j =1; j<=i; j++)
        {
            cout<<"* ";
        }
    cout<<endl; 
    }  
    return 0; 

}