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

    multiset<char> :: iterator it;
    it = ms.end();
    it--;
    it--;
    ms.erase(it);

    cout<<"\n\nMultiSet after removing only 1 instance of 'x' = ";
    for (auto x: ms)
        cout<<x<<"  ";

        cout<<endl<<endl;

        return 0;

}
