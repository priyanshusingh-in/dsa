//wap to enter a choice 1 for insertion 2 for deletion.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,n,k,item;

    int c;
    cout<<"enter 1 for insertion or 2 for deletion: \n";
    cin>>c;

    switch(c)
    {
    case 1:
        cout<<"how many no to store in array: \n";
        cin>>n;
        cout<<"enter the number: \n";
        for(i=0;i<=n-1;i++)
            cin>>a[i];

        cout<<"Enter the number to insert and its position";
        cin>>item>>k;
        k=k-1;

        for(i=n-1;i>=k;i++)
        {
        a[i+1]=a[i];
        }
        a[k]=item;
        cout<<"Contents of the array: \n";
        for(int i=0;i<n-1;i++)
        {
            cout<<a[i]<<endl;
        }
        break;

    case 2:
        cout<<"enter the position to delete: \n";
        cin>>k;
        k=k-1;

        for(i=k;i<n;i++)
        {
            a[i]=a[i+1];
        }

        cout<<"Contents of the array: \n";
        for(int i=0;i<n-1;i++)
        {
            cout<<a[i]<<endl;
        }
        break;

    default:
        cout<<"Enter correct choice!!!";
    }








    return 0;
}
