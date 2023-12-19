//if found returns an iterator to the next greater element of the first occurance of element to search else returns iterator of the next greater element(if no greater element return iterator pointing to end())
//simila to binary search
//logn
//syntax(ind stores the index of the element): int ind=upper_bound(a.begin(),a.end(),elementToSearch)-a.begin();


//Q1. Find the last occurrence of x in a sorted array.
//if it does not exits, print -1.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,4,4,4,4,9,9,10,11};
    int l=sizeof(arr)/sizeof(arr[0]);//calculating the length of the array
    int x=4;
    int ind=upper_bound(arr,arr+l,x)-arr;
    ind--;
    if(ind>=0&&arr[ind]==x)
        cout<<ind;
    else
        cout<<-1;
    return 0;
}

