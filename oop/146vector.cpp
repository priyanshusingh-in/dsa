#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v1;
    cout<<v1.size()<<endl;
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(2);
    v1.push_back(1);
    cout<<"Size of vector="<<v1.size()<<endl;
    cout<<"elements in arrays are\n";
    for(auto it:v1)
        cout<<it<<'\t';
    cout<<'\n';

    v1.pop_back();
    cout<<"\nelements in array are\n";
    for(auto it:v1)
        cout<<it<<'\t';
    cout<<endl;

    cout<<"\nUsing iteator for displaying\n";
    for(auto it:v1)
        cout<<it<<'\t';
    cout<<endl;

    v1.push_back(8);
    v1.push_back(9);

    for(auto it:v1)
        cout<<it<<'\t';
    cout<<endl;

    auto it=v1.begin();
    it++;
    it++;
    v1.insert(it,15);
    cout<<"\nAfter insertion\n";
    for(auto it:v1)
        cout<<it<<'\t';
    cout<<endl;
    
    v1.erase(v1.begin()+4);
    cout<<"\nAfter erasing:\n";
    for(auto it:v1)
        cout<<it<<'\t';
    cout<<endl;
    
    cout<<endl<<v1.size()<<endl;
    v1.clear();
    cout<<endl<<v1.size();
    return 0;
}