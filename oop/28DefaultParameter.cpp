#include<bits/stdc++.h>
using namespace std;

int sum(int x, int y, int z=0, int w=0)
{
    return (x+y+z+w);
}

int main()
{
    cout<<sum(132,535)<<'\n';
    cout<<sum(232,5,23)<<'\n';
    cout<<sum(23,24,23,23)<<'\n';
    return 0;
}
