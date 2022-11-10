#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{
    ifstream read;
    string s1;
    read.open("Ass8.txt");
    while(read.eof()==0){
        getline(read,s1);
        cout<<s1<<endl;
    }

    read.close();
    return 0;

}