#include<bits/stdc++.h>
using namespace std;

void input2dArray(int *arr,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"enter array element at arr["<<i<<"]["<<j<<"] ->";
            cin>>*(arr+i*m+j);
        }
    }
}

void print2dArray(int *arr,int n,int m)
{
    cout<<"array is: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<*(arr+i*m+j)<<' ';
        }
        cout<<'\n';
    }
}

int main()
{
    int n, m;
    cout<<"Enter no. of rows in array: \n";
    cin>>n;
    cout<<"Enter no. of columns in array: \n";
    cin>>m;
    int arr[n][m];
    input2dArray((int*)arr,n,m);
    print2dArray((int*)arr,n,m);

    return 0;
}
