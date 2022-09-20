#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    char s[n];
	    cin>>s;
	    
	    int flag = 0;
	    
	    for(int j=0;j<n;j++)
	    {
	        
	        if(s[j] !='a' || s[j]!='e' || s[j]!='i' || s[j]!='o'|| s[j]!='u')
	        {
	            flag++;
	        }
	        
	        if(s[j] =='a' ||s[j] =='e' || s[j] =='i' || s[j] =='o' || s[j] =='u')
	        {
                cout<<"No\n";
	            break;
	        }
	        
	    }
	    if(flag>=4)
	    {
	        cout<<"Yes\n";
	    }	    
	    
	}
	return 0;
}
