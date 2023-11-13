#include<bits/stdc++.h>
using namespace std;

void search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
    bool flag=true;
        if(arr[i]==x)
        {
            cout<<"item present!!!";
            flag=false;
        }
        if(flag==false) break;
    }
}

int main()
{
    int arr[]={323,424,11,5,23,5};
    int x=5;
    int n=sizeof(arr)/sizeof(arr[0]);

    search(arr,n,x);
    return 0;
}