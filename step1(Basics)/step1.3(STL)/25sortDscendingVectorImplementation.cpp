#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={23,222,4};
    sort(v.begin(),v.end(),greater<int>());
    for(auto it:v)
        cout<<it<<' ';
}