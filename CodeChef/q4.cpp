#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    int k=0;
	while(k<t)
    {
        int a,b,i=a,j=i;
	    cin>>a>>b;
	    for(i=a;i<j;i++)
	    {
	      for(j=i+1;j<=b;j++)
	      {
	          int c=b/a;
	          if(c>1)
	          {
	          cout<<i<<" "<<j<<endl;
	          
	          }
	          else
	          {
	          cout<<"-1\n";
	          
	          }
	      }
	    }
        k++;
    }
	
	return 0;
}
