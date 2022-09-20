#include<iostream>
using namespace std;

int main()
{
    // char ch;
    // cout<<"Enter a character :";
    // cin>>ch;
    // if (ch=='a')
    // {
    //     cout<<"Hello";

    // }
    // else if (ch=='b')
    // {
    //     cout<<"Namaste";
    // }
    // else if (ch=='c')
    // {
    //     cout<<"hola";
    // }
    // else{
    //     cout<<"im learning more";
    // }
    // switch (ch)
    // {
    // case 'a':
    //     cout<<"hello";
    //     break;
    // case 'b':
    //     cout<<"Namaste";
    //     break;
    // case 'c':
    //     cout<<"Hola";
    //     break;
    // case 'd':
    //     cout<<"Bola";
    //     break;
    
    // default:
    // cout<<"Im still learning more";
    //     break;
    // }
 
 // uses of switch
 int a,b;
 cout<<"Enter two number\n";
 cin>>a>>b;
 char op;
 cout<<"Enter operator";
 cin>>op;
 switch (op)
 {
 case '+':
     cout<<a+b;
     break;
 case '-':
     cout<<a-b;
     break;
 case '*':
     cout<<a*b;
     break;
 case '/':
     cout<<a/b;
     break;
 
 default:
 cout<<"Enter valid operator\n";
     break;
 }
return 0;
}