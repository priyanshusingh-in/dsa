#include<bits/stdc++.h>
using namespace std;

void unorderedSetIterator()
{
    unordered_set<int> s={23,4,62,745,2335};
    s.insert(999);
    s.insert(1111);
    unordered_set<int>::iterator iti=s.begin();
    for(int i=0;i<s.size();i++)
    {
        cout<<*(iti)<<' ';
        iti++;
    }
    cout<<'\n';
}



int main()
{
     vector<int> v={23,425,53,26,112,634,513,23};
     vector<int>::iterator it=v.begin();
     for(int i=0;i<v.size();i++)
     {
         cout<<*(it)<<' ';
         it++;
     }
     cout<<'\n';

     unorderedSetIterator();

     return 0;
}
