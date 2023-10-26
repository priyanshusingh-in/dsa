#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v1={1,2,3,4,5,6,7,8,9,10};
    vector<int>v2;
    for(int i=0;i<v1.size();i++)
    {
        v2.push_back(__builtin_popcountll(v1[i]));
    }
    cout<<"Decimal\t\tNo. of 1s in binary\n";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v1[i]<<"\t"<<"->"<<"\t"<<v2[i]<<endl;
    }

    return 0;
}