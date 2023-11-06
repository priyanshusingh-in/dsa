#include<bits/stdc++.h>
using namespace std;

void divide(double x, double y)
{
    cout<<"INSIDE FUNCTION\n";
    try
    {
        if(y==0.0)
        {
            throw y;
        }
        else
            cout<<"DIVISION="<<x/y<<endl;
    }
    catch(double)
    {
        cout<<"COUGHT DOUBLE INSIDE FUNCTION\n";
        throw;
    }
    cout<<"END OF FUNCTION\n";
}

int main()
{
    cout<<"INSIDE MAIN\n";
    try
    {
        divide(10.5,2.0);
        divide(20.0,0.0);
    }
    catch(double)
    {
        cout<<"COUGHT DOUBLE INSIDE MAIN\n";
    }
    cout<<"END OF MAIN\n";

    return 0;
    
}