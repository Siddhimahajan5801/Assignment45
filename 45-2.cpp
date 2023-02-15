#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset <int> ms;

    ms.insert(1);
    ms.insert(2);
    ms.insert(9);
    ms.insert(2);
    ms.insert(7);

    multiset<int> :: iterator it;
    it=ms.end();
    cout<<"Element that follows last element = "<<*it<<endl<<endl;

    return 0;
}
