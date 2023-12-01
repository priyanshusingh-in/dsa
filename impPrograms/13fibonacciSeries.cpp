#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
    {
        return(n);
    }
    else
    {
        return(fib(n-1)+fib(n-2));
    }
}

int main()
{
    int i=0,n;
    cout<<"Enter no of terms in fibonacci series: ";
    cin>>n;

    while(i<n)
    {
        cout<<' '<<fib(i);
        i++;
    }
}