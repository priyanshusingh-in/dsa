#include<bits/stdc++.h>
using namespace std;

void inputMatrix(int** a, int row, int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"enter element at ["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
}

void printMatrix(int** a, int row, int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<'\t';
        }
        cout<<"\n\n";
    }
}

void allocateMemory(int** a, int row, int col)
{
    for(int i=0;i<row;i++)
        a[i]=new int[col];
}

void deallocateMemory(int** a, int row)
{
    for(int i=0;i<row;i++)
        delete[] a[i];
    delete[] a;
}

void matrixMultiply(int** a, int row1, int col1, int** b, int row2, int col2)
{
    if(col1 != row2)
    {
        cout<<"Matrix multiplication not possible due to incompatible dimensions.\n";
        return;
    }

    int** result=new int*[row1];
    allocateMemory(result,row1,col2);
    
    //setting each value of result matrix = 0 
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            result[i][j]=0;
        }
    }

    //matrix multiplication
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
    printMatrix(result,row1,col2);

    deallocateMemory(result,row1);

}

int main()
{
    int row1,col1,row2,col2;

    cout<<"enter row and coloum for 1st matrix:";
    cin>>row1>>col1;

    int** a=new int*[row1];
    allocateMemory(a,row1,col1);

    cout<<"Input for 1st matrix: \n";
    inputMatrix(a,row1,col1);
    
    cout<<"1st Matrix:\n";
    printMatrix(a,row1,col1);

    cout<<"enter row and coloum for 2nd matrix:";
    cin>>row2>>col2;

    int** b=new int*[row2];
    allocateMemory(b,row2,col2);

    cout<<"Input for 2nd matrix: \n";
    inputMatrix(b,row2,col2);

    cout<<"2nd Matrix:\n";
    printMatrix(b,row2,col2);
    
    matrixMultiply(a,row1,col1,b,row2,col2);

    deallocateMemory(a,row1);
    deallocateMemory(b,row2);

    return 0;
}