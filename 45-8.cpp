#include<bits/stdc++.h>
using namespace std;

int main ()
{
    multiset<char> ms;

    ms.insert('a');
    ms.insert('i');
    ms.insert('x');
    ms.insert('d');
    ms.insert('h');
    ms.insert('x');
    ms.insert('z');

    cout<<"MultiSet = ";
    for (auto x: ms)
        cout<<x<<"  ";

    ms.erase('x');
    cout<<"\n\nMultiSet after removing all the instances of 'x' = ";
    for (auto x: ms)
        cout<<x<<"  ";

        cout<<endl<<endl;

        return 0;

}
