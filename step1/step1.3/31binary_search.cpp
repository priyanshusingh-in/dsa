#include<bits/stdc++.h>
using namespace std;

int main()
{
    int element,input;
    set<int>s;

    cout<<"Enter elements in s:\n";
    for(int i=0;i<5;i++)
    {
        cout<<"index "<<i<<": ";
        cin>>input;
        s.insert(input);
        cout<<'\n';
    }

    cout<<"Elements in s:\n";
    for(auto it:s)
        cout<<it<<' ';
    cout<<'\n';

    cout<<"Enter element to be searched:\n";
    cin>>element;

    if(binary_search(s.begin(),s.end(),element))
        cout<<element<<" is present in s!\n";
    else
        cout<<element<<" is not present in s!";
    
    return 0;
}