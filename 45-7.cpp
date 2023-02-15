#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset <int> ms;

    ms.insert(5);
    ms.insert(2);
    ms.insert(9);
    ms.insert(2);
    ms.insert(7);

    cout<<"Multiset = ";
    for (auto x : ms)
        cout<<x<<"  ";

    ms.clear();

    cout<<"\n\nAfter removing all the elements Multiset = ";
    for (auto x : ms)
        cout<<x<<"  ";

    cout<<endl<<endl;

    return 0;
}
