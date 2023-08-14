#include<bits/stdc++.h>
using namespace std;

void insertEnd()
{
    cout<<"Inserting Element at the end"<<'\n';
    int n=4;
    int arr[n]={323,4,23};
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<' ';
    }
    arr[n-1]=99;
    cout<<'\n';
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
}

void insertBetween()
{
    cout<<"Insert at a specific location\n";
    int n=5;
    int arr[n]={323,24,4,6,434};
    cout<<"array before: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
    int item=99;
    int location=0;
    for(int j=n-1;j>=location;j--)
    {
        arr[j+1];
    }
    cout<<'\n';
    arr[location]=item;
    cout<<"array after: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
}

int main()
{
    insertEnd();
    insertBetween();
    return 0;
}
