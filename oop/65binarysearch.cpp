#include<bits/stdc++.h>
using namespace std;

int main()
{
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
}
