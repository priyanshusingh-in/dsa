#include<bits/stdc++.h>
using namespace std;

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

     return 0;
}
