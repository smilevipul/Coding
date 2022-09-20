#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    
	    if(n%m==0)
	    {
	        int temp = n/m;
	        if(temp%2==0)
	        {
	            cout<<"Yes\n";
	            
	        }
	        else
	        {
	            cout<<"No\n";
	        }
	    }
	    else
	    {
	        cout<<"No\n";
	    }
	    
	}
	return 0;
}
