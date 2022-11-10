#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{
    //conectiong our file with hout stream
    ofstream vout("Ass8.txt");

    //taking a string to write in the file
    cout<<"Enter content to write in file\n";
    string s;
    getline(cin,s);
    // writing string into file
    vout<<s;

    vout.close();

}