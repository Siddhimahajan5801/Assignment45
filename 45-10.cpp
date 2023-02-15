#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    multiset <int> A = {1,2,3};

    multiset <int> B = {1,1,2,3};

    if (A == B)
        cout<<"Both the multisets are equal!\n";

    else
        cout<<"Both the multisets are not equal!\n";

        return 0;
}
