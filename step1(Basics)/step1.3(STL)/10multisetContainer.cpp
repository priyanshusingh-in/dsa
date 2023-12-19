#include<bits/stdc++.h>
using namespace std;

int displayMultiset(multiset<int> s)
{
    cout<<"Elements in the multiset are: "<<'\n';

    for(auto it : s)
        cout<<it<<' ';

    cout<<"\n";

}

int main()
{
    multiset<int> s;
    for(int i=1;i<=10;i++)
        s.insert(i);

    s.insert(5);

    displayMultiset(s);

    int n=2;

    if(s.find(n)!=s.end())
        cout<<n<<" is present in the multiset"<<endl;

    s.erase(s.begin());
    
    cout<<"Elements after deleting the first element: \n";
    displayMultiset(s);

    cout<<"The size of the multiset is: "<<s.size()<<'\n';

    if(s.empty()==false)
        cout<<"The multiset is not empty "<<endl;
    else
        cout<<"The multiset is empty"<<endl;
    
    s.clear();

    cout<<"Size of the multiset after clearing all the elements: "<<s.size();

    return 0;
}