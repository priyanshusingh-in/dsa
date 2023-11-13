#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int i,int j)
{
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main()
{
    
    int k=10;
    int arr[]={23,44,2,5,1,543,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    k=k%n;

    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);

    for(auto it:arr)
        cout<<it<<' ';

    return 0;
}