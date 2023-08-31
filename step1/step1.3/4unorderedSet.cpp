#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    for(int i=1;i<=10;i++)
        s.insert(i);

    cout<<"Elements present in the unordered set: ";
    for(auto it=s.begin(); it != s.end(); it++)
        cout<<*it<<' ';

    cout<<'\n';


    int n=223; //n = item to check if present in the set
    if(s.find(n)!= s.end())
        cout<<n<<" is present in unordered set"<<'\n';
    else
        cout<<n<<" is not present in unordered set"<<'\n';


    s.erase(s.begin());
    cout<<"Element after deleting the first element: ";
    for(auto it=s.begin(); it!=s.end() ; it++)
    {
        cout<<*it<<' ';
    }
    cout<<'\n';

    cout<<"The size of the unordered set is: "<<s.size()<<endl;

    if(s.empty()== false)
        cout<<"The unordered set is not empty"<<endl;
    else
        cout<<"The unordered set is empty"<<endl;
    s.clear();
    cout<<"Size of the unordered set after clearing all the elements: "<<s.size();

    return 0;
}
