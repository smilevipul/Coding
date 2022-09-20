#include<bits/stdc++.h>
using namespace std;
int main(){
       int n;
       vector <int> v;
       for(int i=1; i<=1000; ++i){
              bool found = false;
              int j = i;
             while(j != 0){
              int a = j % 10;
              j = j/10;
              if(a==4 || a==7){
                     continue;
              }
              else {found = true; break;}

             }
             if(found == true);
             else v.push_back(i);
      }

       for( int i=0; i<v.size(); ++i){
              cout << v[i] << endl;  
       }
        
      


       
       return 0;
}