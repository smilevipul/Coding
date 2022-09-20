#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int* a = new int[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    int k;cin>>k;
	    
	    int* b = new int[k];
	    for(int i=0;i<k;i++)
	    cin>>b[i];
	    
	    
	    vector<int> v ;

        for (int i = 0; i < n; i++)
        {
            v.push_back(a[i]);
        }

        for (int i = 0; i <k; i++)
        {
            v.push_back(b[i]);
        }

        sort(v.begin(),v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        vector<int> w;
        int i=0;
        while(i<w.size()-1)
        {
             if(v[i]==v[i+1])
            {
                i = i+2;
            }
            else
            {
                w.push_back(v[i]);
                i++;
            }
            if(i==w.size())
            {
                w.push_back(a[i]);
            }
        }


        for (int i = 0; i < w.size(); i++)
        {
            cout<<w[i]<<" ";
        }
        cout<<endl;
        
        
        
        

        // for (int i = 0; i < n; i++)
        // {
        //     int flag =0;
        //     for (int j = 0; j < k; j++)
        //     {
                
        //         if(a[i]==b[j])
        //         {
        //             flag++;
        //         }

        //     }
        //         if(flag==0)
        //         {
        //             v.push_back(a[i]);
        //             cout<<a[i]<<" ";
        //         }
            
        // }
        // cout<<endl;

        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;

        // // cout<<endl;
        
        
	}
	return 0;
}
