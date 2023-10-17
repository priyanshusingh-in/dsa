#include<bits/stdc++.h>
using namespace std;

void displayUnorderedMap(unordered_map<int,int> mp)
{
    cout<<"Element present in the map: "<<endl;
    cout<<"Key\tElement"<<endl;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<'\t'<<it->second<<endl;
    }
    cout<<endl;
}

int main()
{
    unordered_map<int,int>mp;
    for(int i=1;i<=5;i++)
    {
        mp.insert({i,i*10});
    }

    displayUnorderedMap(mp);

    int n=2;
    if(mp.find(n)!=mp.end())
        cout<<n<<" is present in map"<<endl;

    mp.erase(mp.begin());
    cout<<"Elements after deleting the first elements: "<<endl;
    displayUnorderedMap(mp);

    cout<<"The size of the map is: "<<mp.size()<<endl;

    if(mp.empty()==false)
        cout<<"The map is not empty"<<endl;
    else
        cout<<"The map is empty"<<endl;

    mp.clear();
    cout<<"Size of the set after clearing all the elements: "<<mp.size();

    return 0;

}