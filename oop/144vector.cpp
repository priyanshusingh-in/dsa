#include<bits/stdc++.h>
using namespace std;

void displayVector(vector<int>v)
{
    for(auto it:v)
        cout<<it<<' ';
    cout<<'\n';
}

int main()
{
    vector<int>v;
    cout<<"Size of vector: "<<v.size()<<endl;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    cout<<"size of vector: "<<v.size()<<endl;
    for(int i=10;i<20;i++)
    {
        v.push_back(i);
    }
    cout<<"size of vector: "<<v.size()<<endl;
    displayVector(v);
}