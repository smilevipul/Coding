#include<iostream>
using namespace std;

void findSol(int n ,int m,int arr[])
{
	long long int sum =0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] != arr[n-m])
		{
			sum = sum +arr[i];
		}
	}
	
	cout<<sum<<endl;
}

int main()
{
    int arr[] = {1,2,3,5},n=4,m=2;
    findSol(n,m,arr);
    return 0;
}