#include<bits/stdc++.h>
using namespace std;

void vectorIterator()
{
     vector<int> v={23,425,53,26,112,634,513,23};
     vector<int>::iterator it=v.begin();
     for(int i=0;i<v.size();i++)
     {
         cout<<*(it)<<' ';
         it++;
     }
     cout<<'\n';

     auto it2=v.end();
     for(int i=0;i<v.size();i++)
     {
         cout<<*(--it2)<<' ';

     }
     cout<<'\n';

     auto it3=v.rend();
     auto it4=v.rbegin();

     cout<<v.back()<<'\n';

     for(auto iit=v.begin();iit!=v.end();iit++)
     {
         cout<<*(iit)<<' ';
     }
     cout<<'\n';

     for(auto it : v)
     {
         cout<<it<<' ';
     }
     cout<<'\n';

     //delete vector element
     v.erase(v.begin()+1);
     //delete vector element in range
     v.erase(v.begin()+2,v.begin()+4);

     //insert function vector
     vector<int>v2(2,100);
     v.insert(v.begin(),300);
     v.insert(v.begin()+1,2,10);

     vector<int>copy(2,50);
     v.insert(v.begin(),copy.begin(),copy.end());

     cout<<v2.size()<<'\n';

     for(auto it : v2)
     {
         cout<<it<<'\n';
     }

}

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

void unorderedSetIteratorR1()
{
     unordered_set<int> s1;
     for(int i=1;i<=10;i++)
          s1.insert(i);

     for(auto it=s1.begin();it!=s1.end();it++)
     {
          cout<<*it<<'\n';
     }
}

int main()
{
     //vectorIterator();
     //unorderedSetIterator();
     unorderedSetIteratorR1();
     return 0;
}
