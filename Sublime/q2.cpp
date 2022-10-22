#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;

	    for(int i=0;i<n;i++)
	    {
	    	if(s[i] != 'a' || s[i] != 'e' || s[i] != 'i' || s[i]!='o' || s[i] !='u')
	    	{
	    		int count =0;
	    		for(int j=i;s[j] != 'a' || s[j] != 'e' || s[j] != 'i' || s[j]!='o' || s[j] !='u';j++)
	    		{
	    			count++;
	    		}
	    		if(count>=4)
	    		{
	    			cout<<"No\n";
	    			break;
	    		}
	    	}
	    }
	    cout<<"Yes\n";
	    

	    
	}
	return 0;
}