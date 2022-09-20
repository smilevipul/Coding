#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    // your code goes here
        int a, b, c;
        cin >> a >> b >> c;

        int maxi = max(a, b);
        maxi = max(maxi, c);
        cout<<maxi<<endl;
        int mini = min(a, b);
        mini = min(mini, c);
        cout<<mini<<endl;

    return 0;
}