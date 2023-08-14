#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=4;
    int arr[n]={434,23,4,1};
    int item=1;
    cout<<"doing linear search";
    for(int i=0;i<n;i++)
    {
        if(arr[i]==item)
        {
            cout<<"the element is at index: "<<i<<'\n';
        }
    }
    cout<<"doing binary search";
    int BEG=0;
    int END=n-1;
    int MID=(BEG+END)/2;
    while((BEG<END)&&(arr[MID]=!item))
    {
        if(item<arr[MID])
        {
            END=MID-1;
        }
        else
        {
            MID=(BEG+END)/2;
        }
        MID=
    }
}
