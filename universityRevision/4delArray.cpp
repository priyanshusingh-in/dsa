#include<bits/stdc++.h>
using namespace std;

void delArray()
{
    int n=4;
    int arr[n]={323,42,2,2};
    cout<<"array before: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
    int k=1;
    int data=arr[k];
    for(int j=k;j<=n-1;j++)
    {
        arr[j]=arr[j+1];
    }
    n=n-1;

    cout<<"array after: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
}

int main()
{
    delArray();
    return 0;
}
