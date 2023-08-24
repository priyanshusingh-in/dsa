#include<bits/stdc++.h>
using namespace std;

int smallest(int arr[],int n,int k) {

    int small=arr[k];
    int loc=k;
    for(int j=k+1;j<n-1;j++)
    {
        if (small>arr[j])
        {
            small=arr[j];
            loc=j;
        }
    }
    return small;

    }

int main()
{
    int k=0;
    int n;
    cout<<"enter length of array: \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter element at: "<<i;
        cin>>arr[i];
    }
    cout<<"the array is: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }

    for(k=0;k<n-1;k++)
    {
       smallest(arr[],n);
       int temp=arr[k];
       arr[k]=arr[loc];
       arr[loc]=temp;
    }




    return 0;
}
