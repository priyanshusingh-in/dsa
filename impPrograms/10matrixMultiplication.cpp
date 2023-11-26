#include<bits/stdc++.h>
using namespace std;

void matrixMultiply(int** a, int row1, int col1, int** b, int row2, int col2)
{
    if(col1 != row2)
    {
        cout<<"Matrix multiplication not possible due to incompatible dimensions.\n";
        return;
    }

    int** result=new int*[row1];
    for(int i=0;i<row1;i++)
        result[i]=new int[col2];

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            result[i][j]=0;
        }
    }

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            for(int k=0;k<col1;k++)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    cout<<"Matrix a[][] X b[][] =\n";

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<result[i][j]<<'\t';
        }
        cout<<"\n\n";
    }

    for(int i=0;i<row1;i++)
        delete[] result[i];
    delete[] result;

}

int main()
{
    int row1,col1,row2,col2;

    cout<<"enter row and coloum for 1st matrix:";
    cin>>row1>>col1;

    int** a=new int*[row1];
    for(int i=0;i<row1;i++)
        a[i]=new int[col1];

    cout<<"Input for 1st matrix: \n";
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cout<<"enter element at ["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    
    cout<<"1st Matrix:\n";
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cout<<a[i][j]<<'\t';
        }
        cout<<"\n\n";
    }

    cout<<"enter row and coloum for 2nd matrix:";
    cin>>row2>>col2;

    int** b=new int*[row2];
    for(int i=0;i<row2;i++)
        b[i]=new int[col2];

    cout<<"Input for 2nd matrix: \n";
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<"enter element at ["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];
        }
    }

    cout<<"2nd Matrix:\n";
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<b[i][j]<<'\t';
        }
        cout<<"\n\n";
    }

    matrixMultiply(a,row1,col1,b,row2,col2);

    for(int i=0;i<row1;i++)
        delete[] a[i];
    delete[] a;

    for(int i=0;i<row2;i++)
        delete[] b[i];
    delete[] b;

    return 0;
}