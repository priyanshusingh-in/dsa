//wap to handle the exception division by 0 and array index out of bound using try catch block

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a and b";
    cin>>a;
    cin>>b;
    int x=a-b;
    int arr[5]={1,2,3,4,5};
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
    catch(int j)
    {
        cout<<"array out of bounds"<<j;
    }
    catch(int i)
    {
        cout<<"Exception caught:x="<<x;
    }
    return 0;
}