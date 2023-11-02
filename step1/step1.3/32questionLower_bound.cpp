//Find the largest number smaller than x in a sorted array. If no numeber exist print -1.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter array length: \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter element at index ["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<"\n";

    sort(arr,arr+n);

    cout<<"Entered array is:\n";
    for(auto it:arr)
        cout<<it<<' ';
    cout<<'\n';
    int x;
    cout<<"Enter the element to check: ";
    cin>>x;
    int ind=lower_bound(arr,arr+n,x)-arr;
    ind--;
    if(ind>=0)
        cout<<arr[ind];
    else
        cout<<-1;

    return 0;
}