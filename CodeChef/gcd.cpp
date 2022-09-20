// CPP program to illustrate
// undefined behavior of
// gcd function of C++ STL
#include <iostream>
#include <algorithm>
#include<numeric> for C++17
 
using namespace std;
 
int main()
{
    cout << "gcd(6, 20) = " <<gcd(2.0, 8) << endl; // gcd(2.0,8) for C++17
}