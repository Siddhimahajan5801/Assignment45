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

    multiset<int> :: iterator it;
    it=ms.begin();
    cout<<"First element = "<<*it<<endl<<endl;

    cout<<"Multiset = ";    // Multi set is sorted by default
    for (auto x : ms)
        cout<<x<<"  ";

    cout<<endl<<endl;

    return 0;
}
