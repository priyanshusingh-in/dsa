#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter size: \n";
    cin>>n>>m;

    int arr1[n][m], arr2[n][m];

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

    cout<<"sum of arr1 and arr2: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr1[i][j]+arr2[i][j]<<' ';
        }
        cout<<'\n';
    }



    return 0;
}
