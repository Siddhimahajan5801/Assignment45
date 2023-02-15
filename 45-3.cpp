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

    cout<<"Number of elements in the multiset = "<<ms.size();

    cout<<endl<<endl;

    return 0;
}
