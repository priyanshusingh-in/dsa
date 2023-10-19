#include<bits/stdc++.h>
using namespace std;
int main()
{

    int *arr,sum=0;
    int size;
    cout<<"\n Enter the size of int array:";
    cin>>size;
    cout<<"\nCreating an array of size"<<size;
    arr=new int[size];
    if(arr==NULL)
    {
        cout<<"\nError in memory allocation";
        exit(1);
    }
    else
        cout<<"\nMemory allocated!!!";
    cout<<"\nEnter array elements:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        //cin>>*;//possible to take input using pointer to array
        //cin>>*(i+arr);
    }
    
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
        //sum=sum+*(arr+i);//possible to use pointer to array for sum
    }
    cout<<"\nSum of elements of array is:"<<sum;

    delete[]arr;
    
    return 0;
}