#include<bits/stdc++.h>
using namespace std;

void displayUnorderedMultimap(unordered_multimap<int,int>mp)
{
    cout<<"Elements in the unordered multimap are: \n";
    for(auto it=mp.begin();it!=mp.end();it++)
        cout<<it->first<<'\t'<<it->second<<endl;
    
    cout<<endl;
}

int main()
{
    unordered_multimap<int,int>mp;
    for(int i=1;i<=5;i++)
        mp.insert({i,i*10});

    mp.insert({4,40});
    
    displayUnorderedMultimap(mp);

    int n=2;
    if(mp.find(n)!=mp.end())
        cout<<n<<" is present in unordered multimap"<<endl;
    
    mp.erase(mp.begin());

    cout<<"Elements after deleting the first element: \n";
    displayUnorderedMultimap(mp);

    cout<<"The size of the unordered multimap is: "<<mp.size()<<endl;

    if(mp.empty()==false)
        cout<<"The unordered multimap is not empty"<<endl;
    else
        cout<<"The unordered multimap is empty"<<endl;
    
    mp.clear();

    cout<<"Size of the unordered multimap after clearing all the elements: "<<mp.size();

    return 0;
}