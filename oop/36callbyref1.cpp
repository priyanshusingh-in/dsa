#include<bits/stdc++.h>
using namespace std;

//function declaratioin

void swap(int &x, int &y);

void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

    return;
}

int main()
{
    int a=188;
    int b=299;

    cout<<"before swap, value of a:"<<a<<endl;
    cout<<"before swap, value of b:"<<b<<endl;
    swap(a,b);
    cout<<"after swap, value of a:"<<a<<endl;
    cout<<"after swap, value of b:"<<b<<endl;
    return 0;
}
