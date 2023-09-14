//wap to enter the user 1 for binary search and 2 for liner search

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    cout<<"enter 1 for binary search and 2 for liner search: \n";
    cin>>c;

    switch(c)
    {
    case 1:
    int ar[100],beg,mid,end,i,n,search;
    cout<<"how many numbers in the array: "; cin>>n;
    cout<<"enter"<<n<<" number in ascending order-->";
    for(i=0;i<n;i++)
        cin>>ar[i];

    beg=0;
    end=n-1;
    cout<<"enter a number to search: ";
    cin>>search;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(ar[mid]==search)
            cout<<"\nItem found at position"<<(mid+1);
        if(search>ar[mid])
            beg=mid+1;
        else
            end=mid-1;
    }

    cout<<"\nSorry! "<<search<<" not found.";
    break;

    case 2:
    int arr[100];
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
    break;

    default:
        cout<<"enter correct choice!!";
    }
    return 0;
}
