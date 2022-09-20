#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1="abcd";
    string s2="ef";
    
    cout<<s1.length()<<" "<<s2.length()<<endl;
    cout<<s1+s2<<endl;
    string temp=s1;
    s1[0]=s2[0];
    s2[0]=temp[0];
    cout<<s1<<" "<<s2;
    
  
    return 0;
}