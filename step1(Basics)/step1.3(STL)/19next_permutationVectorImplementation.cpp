#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,3};

    next_permutation(v.begin(),v.end());

    cout<<v[0]<<' '<<v[1]<<' '<<v[2];

    return 0;
}