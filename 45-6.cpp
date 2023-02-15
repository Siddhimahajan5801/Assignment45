#include<bits/stdc++.h>
using namespace std;

int main ()
{
    multiset <char> ms;

    ms.insert('x');

    cout<<"Multiset = ";
    for(auto x: ms)
        cout<<x<<endl;

    return 0;
}
