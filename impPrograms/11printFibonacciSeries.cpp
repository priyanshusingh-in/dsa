#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter term:";
    int n;
    cin>>n;
    cout<<0<<' '<<1<<' '<<1<<' ';
    int a=1,b=1,c=0;
    for(int i=0;i<n-3;i++)
    {
        c=a+b;
        cout<<c<<' ';
        a=b;
        b=c;
    }

    return 0;
}