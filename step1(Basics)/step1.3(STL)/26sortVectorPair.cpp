#include<bits/stdc++.h>
using namespace std;

bool sortByFirstPairElement(const pair<int,string>&a,const pair<int,string>&b)
{
    return (a.first<b.first);
}

int main()
{
    vector<pair<int,string>>v={{3,"Priyanshu Singh"},{2,"Shivam Singh"},{1,"JK Singh"}};

    sort(v.begin(),v.end(),sortByFirstPairElement);

    for(auto it:v)
        cout<<it.first<<'\t'<<it.second<<'\n';

        return 0;
}