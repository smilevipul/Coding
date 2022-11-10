#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{

    ifstream vin("Ass8.txt");
    string content;
    vin>>content;

    cout<<"Content of the file is\n"<<content<<endl;

    vin.close();

}