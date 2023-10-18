//wap to ask the user to enter 5 rolls and 5 names using dma

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *arr1;
    int size;
    string *arr2;


    cout<<"Enter size of integer array:";
    cin>>size;
    cout<<"\n Creating an array of size"<<size;

    arr1=new int[size];
    arr2=new string[size];
    if((arr1==NULL)&&(arr2==NULL))
    {
        cout<<"\n Problem in memory allocation";
        exit(1);
    }
    else
        {
            cout<<"\n Dynamic allocation of memory for array arr1 and arr2  is successful:";
            cout<<"\n Enter the roll numbers:";
            for(int i=0;i<size;i++)
            {
                cin>>*(arr1+i);
            }
            cin.ignore();
            cout<<"\nEnter the names:";
            for(int i=0;i<size;i++)
            {
                getline(cin,*(arr2+i));
            }
            cout<<"\n Entered elements are:";
            cout<<"\nRoll\t\tName:";
            for(int i=0;i<size;i++)
            {
                cout<<"\n"<<*(arr1+i)<<"\t\t"<<*(arr2+i);
            }
        }
        delete []arr1;
        delete []arr2;
        cout<<"\nMemory deallocated";

    return 0;
}