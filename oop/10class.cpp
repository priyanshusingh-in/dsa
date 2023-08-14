#include<bits/stdc++.h>
using namespace std;

class arithmetic
{
    int x,y;
public:
    void getdata()
    {
        cout<<"enter the value of x and y:"<<endl;
        cin>>x>>y;
    }
    void sum()
    {
        int z;
        z=x+y;
        cout<<"sum is:"<<z<<endl;
    }
    void divide()
    {
        int z;
        z=x/y;
        cout<<"division is:"<<z<<endl;
    }
    void multiply()
    {
        int z;
        z=x*y;
        cout<<"multiply is:"<<z<<endl;
    }
    void subtract()
    {
        int z;
        z=x-y;
        cout<<"sub result is: "<<z<<endl;
    }
    void hello();
};

void arithmetic::hello()
{
    cout<<"hello"<<endl;
}

int main()
{
    arithmetic obj;
    obj.getdata();
    obj.sum();
    obj.divide();
    obj.multiply();
    obj.subtract();
    obj.hello();
    return 0;
}
