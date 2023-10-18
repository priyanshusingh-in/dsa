#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *arr;
    int size;

    cout<<"Enter size of integer array:";
    cin>>size;
    cout<<"\n Creating an array of size"<<size;

    arr=new int[size];
    if(arr==NULL)
    {
        cout<<"\n Problem in memory allocation";
        exit(1);
    }
    else
        {
            cout<<"\n Dynamic allocation of memory for array arr  is successful:";
            cout<<"\n Enter the array elements:";
            for(int i=0;i<size;i++)
            {
                cin>>*(arr+i);
            }
            cout<<"\n Entered elements are:";
            cout<<"\nAddress\t\tValue:";
            for(int i=0;i<size;i++)
            {
                cout<<"\n"<<arr+i<<'\t'<<*(arr+i);
            }
        }
        delete []arr;
        cout<<"\nMemory deallocated";

    return 0;
}