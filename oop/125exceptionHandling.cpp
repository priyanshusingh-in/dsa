#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the value of a and b";
    cin>>a;
    cin>>b;
    int x=a-b;
    try
    {
        if(x!=0)
        {
            cout<<"Result(a/x)="<<a/x;
        }
        else
        {
            throw(x);
        }
    }
    catch(int i)
    {
        cout<<"Exception caught:x="<<i;
    }
    cout<<"END";
    return 0;
}