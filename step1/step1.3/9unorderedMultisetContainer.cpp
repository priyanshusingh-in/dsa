#include<bits/stdc++.h>
using namespace std;

void displayUnorderedMultiset(unordered_multiset<int> s)
{
    cout<<"Elements present in the unordered multiset: ";
    for(auto it : s)
        cout<<it<<' ';
    cout<<endl;
}

int main()
{
    unordered_multiset<int> s;
    for(int i=1;i<=10;i++)
        s.insert(i);

    s.insert(5);

    displayUnorderedMultiset(s);

    int n=2;
    if(s.find(n)!=s.end())
        cout<<n<<" is present in unordered multiset"<<endl;

    s.erase(s.begin());

    cout<<"Elements after deleting the first element: "<<endl;
    displayUnorderedMultiset(s);

    cout<<"The size of the unordered multiset is: "<<s.size()<<endl;

    if(s.empty()==false)
        cout<<"The unordered multiset is not empty "<<endl;
    else
        cout<<"The unordered multiset is empty"<<endl;
    
    s.clear();

    cout<<"The size of the unordered multiset after clearing all the elements: "<<s.size()<<endl;
}