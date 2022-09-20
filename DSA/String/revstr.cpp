#include<iostream>
using namespace std;

char toLowerCase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp = ch +32;
        return temp;
    }
}
bool checkPildrome(char name[],int size)
{
    int s=0,e=size-1;
    while(s<=e)
    {
        if(toLowerCase(name[s])==toLowerCase(name[e]))
        {
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}
int findLength(char name[])
{
    int count=0;
    for(int i=0;name[i] !='\0';i++)
    {
        count++;
    }
    return count;
}

void reversed(char name[],int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}

int main()
{
   char name[] = "a1bcB1A";
   int ans=findLength(name);
   cout<<checkPildrome(name,ans)<<endl;
   cout<<ans<<endl;
   reversed(name,ans);
   cout<<name<<endl;

   cout<<toLowerCase('a')<<endl;
   cout<<toLowerCase('c')<<endl;

}