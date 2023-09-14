//wap to ask the user to enter 10 int numbers, 10 float numbers and 10 chars using array.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[10];
    float arr2[10];
    char arr3[10];

    cout<<"enter 10 int: \n";
    for(int i=0;i<10;i++)
    {
        cin>>arr1[i];
    }

    cout<<"enter 10 float: \n";
    for(int i=0;i<10;i++)
    {
        cin>>arr2[i];
    }

    cout<<"enter 10 char: \n";
    for(int i=0;i<10;i++)
    {
        cin>>arr3[i];
    }

    cout<<endl;
    cout<<"entered int is: \n";
    for(int i=0;i<10;i++)
    {
        cout<<arr1[i]<<endl;
    }
    cout<<endl;
    cout<<"entered float is: \n";
    for(int i=0;i<10;i++)
    {
        cout<<arr2[i]<<endl;
    }
    cout<<endl;
    cout<<"entered char is: \n";
    for(int i=0;i<10;i++)
    {
        cout<<arr3[i]<<endl;
    }
    cout<<endl;
    cout<<"sum of int is:";
    int sum=0;
    for(int i=0;i<10;i++)
    {
        sum+=arr1[i];
    }
    cout<<sum<<endl;

    return 0;
}
