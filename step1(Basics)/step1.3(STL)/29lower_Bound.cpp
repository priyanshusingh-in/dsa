//if found returns an iterator to the first occurance of element to search else returns iterator of the next greater element(if no greater element return iterator pointing to end())
//simila to binary search
//logn
//syntax(ind stores the index of the element): int ind=lower_bound(a.begin(),a.end(),elementToSearch)-a.begin();
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Q1.Find the first occurrence of a X in a sorted array.
//if it does not exits, print -1
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a={1,4,4,4,4,9,9,10,11};
    int x=11;
    int ind=lower_bound(a.begin(),a.end(),x)-a.begin();
    if(ind!=a.end()-a.begin()&&a[ind]==x)
        cout<<ind;
    else
        cout<<-1;
    return 0;
}
*/