#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a==b)
	    {
	        cout<<"Yes\n";
	    }
	    if(b>a)
	    {
	        if((b-a)%2==0)
	        {
	            cout<<"Yes\n";
	        }
	        else
	        {
	            cout<<"No\n";
	        }
	    }
	    
	    if(a>b)
	    {
	        if((a-b)%2==0)
	        {
	            cout<<"Yes\n";
	        }
	        else
	        {
	            cout<<"No\n";
	        }
	    }
	    
	}
	return 0;
}
