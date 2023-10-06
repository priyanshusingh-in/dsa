#include<bits/stdc++.h>
using namespace std;

class X
{
public:
    int a=213;
};

class Y:public X
{
public:
    int b=424;
};
class Z:public Y
{
public:
    int c=233;
};

int main()
{
    Z obj;
    cout<<obj.a+obj.b+obj.c;

    return 0;
}
