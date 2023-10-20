#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int,int>mp;
    for(int i=1;i<=5;i++)
    {
        mp.insert({i,i*10});
    }
    mp.insert({4,40});

    

    return 0;
}