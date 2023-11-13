#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={233,45,2,1,55,3};
    for(auto it:arr)
        cout<<it<<' ';
    cout<<'\n';

    int n=sizeof(arr)/sizeof(arr[0]);
    
    int i=0,j=n-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(auto it:arr)
        cout<<it<<' ';
    cout<<'\n';
    
    return 0;
}