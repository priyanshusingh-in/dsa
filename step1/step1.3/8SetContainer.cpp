//stores everything in sorted order and unique elements
//not a linear container but a tree in maintained in backend
#include<bits/stdc++.h>
using namespace std;

void printSets(set<int> s)
{
    cout<<"Elements present in the set: \n";
    for(auto it:s)
    {
        cout<<it<<'\n';
    }
    cout<<endl;
}


int main()
{
    set<int> s;
    for(int i=1;i<=10;i++)
    {
        s.insert(i);
    }

    printSets(s);

    int n=2;
    if(s.find(n)!=s.end())//if element not found find() will return an iterator pointing right after the last element i.e. end()
    {
        cout<<n<<" is present in the set"<<endl;
    }
    //erase(begin,end) -> [begin,end)
    cout<<"Deleting the first element: \n";
    s.erase(s.begin());
    printSets(s);

    cout<<"The size of the set is: "<<s.size()<<endl;

    if(s.empty()==false)
        cout<<"The set is not empty"<<endl;
    else
        cout<<"The set is empty"<<endl;

    s.clear();
    cout<<"Size of the set after clearing all the elements: "<<s.size();

    return 0;
}
