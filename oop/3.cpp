//wap to perform all arthmetic operations using cpp
#include<bits/stdc++.h>
using namespace std;

void display1()
{
    int a,b,sum,sub,mul,div;
    cout<<"enter the value of a: \n";
    cin>>a;
    cout<<"enter the value of b: \n";
    cin>>b;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    cout<<sum<<'\n'<<sub<<'\n'<<mul<<'\n'<<div;
}

int main()
{
    display1();
    return 0;
}
