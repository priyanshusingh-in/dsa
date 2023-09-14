#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int length, breadth;
    Rectangle()
    {
        length=10;
        breadth=2;
    }
    void area()
    {
        int a=length*breadth;
        cout<<"area is "<<a;
    }
};

int main()
{
    Rectangle r;
    r.area();
    return 0;
}
