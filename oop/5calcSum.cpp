#include<bits/stdc++.h>
using namespace std;

void sum(int arr[],int n)
{
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=arr[i];
    }
    cout<<"sum is: "<<total;
}

int main()
{
    int n;
    cout<<"enter length of array: \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter element at: "<<"["<<i<<"]\n";
        cin>>arr[i];
    }
    sum(arr,n);
    return 0;
}
