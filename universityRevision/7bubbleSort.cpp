#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter array length: \n";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter element at: \n"<<i;
        cin>>arr[i];
    }

    cout<<"unsorted array is: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
///////////////////////////////////////
    for(int k=1;k<=n-1;k++)
    {
        int i=1;
        while(i<n-k)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            i=i+1;
        }
    }
/////////////////////////////////////////
    cout<<"sorted array is: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }

    return 0;
}
