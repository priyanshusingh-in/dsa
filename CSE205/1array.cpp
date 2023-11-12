#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={23,24,11,55,23,11,5};

    for(auto it:arr)
        cout<<it<<' ';

    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    cout<<&arr[5]<<endl;
    
    cout<<"Sum of all the arr elements: "<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<sum;

    int x;
    cout<<"\nenter element to linear search:\n";
    cin>>x;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<x<<" is present at index "<<i<<'\n';
            break;
        }
    }

    int max=INT_MIN;
    int smax=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
        if(min>arr[i])
            min=arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(smax<arr[i] && arr[i]!=max)
            smax=arr[i];
    }

    cout<<"max element in arr:\n";
    cout<<max<<endl;
    cout<<"2nd max element in arr:\n";
    cout<<smax<<endl;
    cout<<"min element in arr:\n";
    cout<<min<<endl;



    return 0;
}