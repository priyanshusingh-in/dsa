#include<bits/stdc++.h>
using namespace std;

void displayList(list<int>l)
{
    for(auto it:l)
        cout<<it<<' ';
    cout<<'\n';
}

int main()
{
    list<int>list1;
    list<int>list2(5);
    for(int i=0;i<3;i++)
    {
        list1.push_back(i);
    }
    cout<<"\n Displaying first list: ";
    displayList(list1);

    for(auto it=list2.begin();it!=list2.end();it++)
        *it=1;
    
    cout<<"\n Displaying second list: ";
    displayList(list2);

    cout<<"\nPUsing element at front:";
    list1.push_front(100);
    displayList(list1);
    cout<<"\n Poping element from front:";
    list2.pop_front();
    displayList(list2);

    cout<<"\n Sorting first list:";
    list1.sort();
    displayList(list1);
    cout<<"\nSorting second list:";
    list2.sort();
    displayList(list2);
    cout<<"\n Merging list:";
    list1.merge(list2);
    displayList(list1);
    list1.reverse();
    cout<<"\n Reversed merged list:";
    displayList(list1);
    return 0;
}