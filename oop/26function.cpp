#include<bits/stdc++.h>
using namespace std;

void temp()
{
    cout<<"no return no parameter\n";
}

void temp2(int a)
{
    cout<<"no return with parameter\n";
    cout<<a<<'\n';
}

int temp3()
{
    cout<<"with return no parameter\n";
    return 23;
}

int temp4(int a)
{
    cout<<"with return with parameter\n";
    return a;
}

int main()
{
    temp();
    temp2(42);
    temp3();
    temp4(422);
    return 0;
}
