#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void fn(int *pta,int *ptb)
{   int sub,x,y;
    *pta=(*pta+*ptb);
    cout<<*pta<<endl;
    *pta=x;
    *ptb=y;
    sub=abs(x-y);
    ptb = &sub;
    cout<<*ptb;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,*pta,*ptb;
    cin>>a>>b;
    pta=&a;
    ptb=&b;
    fn(pta,ptb); 
    return 0;
}
