#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset <int> ms2,ms1;

    ms1.insert(5);
    ms1.insert(2);
    ms1.insert(9);
    ms1.insert(2);
    ms1.insert(7);

    if (ms1.empty() == true )
        cout<<"Multiset-1 is empty! \n";
    else
        cout<<"MultiSet-1 is not empty \n";


    if (ms2.empty() == true )
        cout<<"\nMultiset-2 is empty! \n";
    else
        cout<<"\nMultiSet-2 is not empty \n";


    cout<<endl;

    return 0;
}
