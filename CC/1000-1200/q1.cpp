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

    int count=0;
    bool ans=false;
        for(int i=0;i<s.size();i++)
    {
        if(s[i] != 'u' && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] !='o')
        {
            count++;
            if(count>=4)
            {
                ans =true;
                break;

            } //ans =true;

        }
        else
        {
            count=0;
        }
    }
    if(ans==true) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
	    
	    
	}
	return 0;
}