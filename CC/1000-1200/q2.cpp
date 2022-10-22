#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] != 'u' && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] !='o'){
            cout<<"Consonoent is found is found ";
            cout<<s[i]<<endl;
        }
        else
        {
            cout<<"NO";
        }
    }
    
}