#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=242,b=646;

    cout<<"max: "<<((a+b)+abs(a-b))/2<<'\n';
    cout<<"min: "<<((a+b)-abs(a-b))/2<<'\n';

    return 0;
}
