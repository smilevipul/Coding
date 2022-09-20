#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while (n>0)
    {
                switch(i)
        {
            case 1:
            if(n<100)
            {
                cout<<"No of 100 notes is 0\n";
            }else
            {
                cout<<"No of 100's notes is "<<n/100<<endl;
                n=n-n/100*100;
            }
            break;
            case 2:
            if(n<50)
            {
                cout<<"No of 50's notes is 0 \n";
            }else
            {
                cout<<"No of 50's notes is "<<n/50<<endl;
                n= n-(n/50)*50;
            }
            break;
            case 3:
            if(n<20)
            {
                cout<<"No of 20's notes is 0\n";
            }else
            {
                cout<<"No of 20's notes is "<<n/20<<endl;
                n=n-(n/20)*20;
            }
            break;
            case 4:
            if(n>0)
            {
                cout<<"No of 1's notes is "<<n<<endl;
                n=n-n;
            }
        }
        i++;
    }
    
    return 0;
}