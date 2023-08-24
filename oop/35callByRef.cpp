#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=138;
    int b=2342;

    swap(&a,&b);
    cout<<"a: "<<a<<'\n';
    cout<<"b: "<<b;
    return 0;
}
