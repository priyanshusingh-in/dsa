#include<bits/stdc++.h>
using namespace std;

void displayMultiMap(multimap<int,int>mp)
{
    cout<<"Elements in the multimap are: \n";
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<'\t'<<it->second<<'\n';
    }
    cout<<'\n';
}

int main()
{
    multimap<int,int>mp;
    for(int i=1;i<=5;i++)
    {
        mp.insert({i,i*10});
    }
    mp.insert({4,40});

    displayMultiMap(mp);

    int n=2;
    if(mp.find(n)!=mp.end())
    {
        cout<<n<<" is present in multimap\n";
    }

    mp.erase(mp.begin());
    cout<<"Elements after deleting the first element:\n";
    displayMultiMap(mp);

    cout<<"The size of the multimap is: "<<mp.size()<<'\n';

    if(mp.empty()==false)
    {
        cout<<"The multimap is not empty\n";
    }
    else
    {
        cout<<"The multimap is empty\n";
    }
    mp.clear();
    cout<<"Size of the multimap after cearing all the elements: "<<mp.size()<<'\n';

    return 0;
}