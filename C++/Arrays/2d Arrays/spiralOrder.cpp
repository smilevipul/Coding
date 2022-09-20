#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }        
    }

    // spiral order print

    int row_start=0,row_end=n-1,coulmn_start=0,column_end=m-1;

    while(row_start <= row_end && coulmn_start <= column_end)
    {
        // for row_start
        
    }
    
}