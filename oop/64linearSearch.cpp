#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout<<"enter no of element to store: \n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"enter element at index: "<<i<<' ';
        cin>>arr[i];
        cout<<endl;
    }
    cout<<endl;
    cout<<"Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<"| "<<arr[i]<<" |";
    }
    cout<<endl;
    int item;
    cout<<"enter the element to search: \n";
    cin>>item;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==item)
        {
            cout<<"item found at index: "<<i<<endl;
            break;
        }
        else
        {
            cout<<"item not found";
            break;
        }

    }

    return 0;
}
