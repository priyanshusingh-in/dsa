#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter size: \n";
    cin>>n>>m;

    int arr1[n][m], arr2[n][m], arr3[m][n];

    cout<<"enter data to arr1: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"enter data at ["<<i<<"]["<<j<<"] :";
            cin>>arr1[i][j];
        }
    }

    cout<<"enter data to arr2: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"enter data at ["<<i<<"]["<<j<<"] :";
            cin>>arr2[i][j];
        }
    }

    cout<<"Product of arr1 and arr2: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<m;k++)
            {
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
        cout<<'\n';
    }

    cout<<"Product of arr1 and arr2: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr3[i][j]<<' ';
        }
        cout<<'\n';
    }

    return 0;
}

