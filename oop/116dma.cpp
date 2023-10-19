#include<bits/stdc++.h>
using namespace std;
int main()
{

    double *arr,*sum,*avg;
    int size;
    sum=new double;
    avg=new double;
    cout<<"\n Enter the size of double array:";
    cin>>size;
    cout<<"\nCreating an array of size"<<size;
    arr=new double[size];
    if(arr==NULL||sum==NULL||avg==NULL)
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
    }
    for(int i=0;i<size;i++)
    {
        *sum=*sum+arr[i];
    }
    cout<<"\nSum of elements of array if:"<<*sum;
    *avg=*sum/size;
    cout<<"\nAverage of array elements is:"<<*avg;

    delete[]arr;
    delete sum;
    delete avg;
    
    return 0;
}