#include<bits/stdc++.h>
using namespace std;

void input1dArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"enter array element at arr["<<i<<"] -> ";
        cin>>arr[i];
    }
}

void print1dArray(int arr[], int n)
{
    cout<<"array is: \n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<' ';
}

int main()
{
    int n;
    cout<<"Enter size of array: \n";
    cin>>n;
    int arr[n];
    input1dArray(arr,n);
    print1dArray(arr,n);

    return 0;
}
