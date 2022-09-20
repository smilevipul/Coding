
#include<iostream>
#include<array>
using namespace std;

int main()
{
    int basic_arr[4]={1,2,3,4};

   array<int , 4> stl_arr  = {5,7,8,9};

   int size = stl_arr.size();

   for(int i=0;i<size;i++)
   {
    cout<<stl_arr[i]<<endl;
   }

   cout<<"At 2nd Position "<<stl_arr[2]<<endl;
   cout<<"At 2nd Position "<<stl_arr.at(2)<<endl;

   cout<<stl_arr.empty()<<endl;
   cout<<stl_arr.back()<<endl;
   cout<<stl_arr.front()<<endl;
}