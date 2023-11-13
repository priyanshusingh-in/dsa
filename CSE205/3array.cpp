#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={233,45,2,1,55,3};
    for(auto it:arr)
        cout<<it<<' ';
    cout<<'\n';

    int n=sizeof(arr)/sizeof(arr[0]);
    int brr[n];

    for(int i=0;i<n;i++)
        brr[i]=arr[n-1-i];

    for(auto it:brr)
        cout<<it<<' ';
    cout<<'\n';

    return 0;
}