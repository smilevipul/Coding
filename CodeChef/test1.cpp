#include <iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;

	while(n--)
	{
		char c = 'n';
		int *c = new int[3];
	}

	while(n--)
	{
		for (int i = 0; i < 3; i++)
		{
			cin>>c[i];
		}
		
	}
	    int *a1 = new int[3];

		for(int i=0;i<3;i++)
		{
			cin>>a1[i];
		}

	    int *a2 = new int[3];

		for(int i=0;i<3;i++)
		{
			cin>>a2[i];
		}

	    int *a3 = new int[3];

		for(int i=0;i<3;i++)
		{
			cin>>a3[i];
		}

		int s1 =0,s2=0,s3=0;

		for (int i = 0; i < 3; i++)
		{
			
			if(i==0)
			{
				s1 = a1[i]+a2[i]+a3[i];
			}
			if(i==1)
			{
				s2 = a1[i]+a2[i]+a3[i];
			}
			if(i==3)
			{
				s3 = a1[i]+a2[i]+a3[i];
			}

		}
		if(s1==0 && s2==0 && s3 == 0)
		{
			cout<<"YES\n";
		}
		else
			cout<<"NO\n";
	
}