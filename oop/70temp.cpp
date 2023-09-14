//wap to find area of triangle using default parameter and copy const



#include<bits/stdc++.h>
using namespace std;

class Triangle
{
    int length,breadth;
public:
    Triangle(){}

    Triangle(int l,int b)
    {
        length=l;
        breadth=b;
    }

    Triangle(Triangle &l,Triangle &b)
    {
        length=l.length;
        breadth=b.breadth;
    }
    void area()
    {
        cout<<length<<" "<<breadth<<endl;
    }
};

int main()
{
    Triangle r1;
    Triangle r2(10,20);
    Triangle r3();

    cout<<"\n Len and bed of r1: ";r1.area();
    cout<<"\n Len and bed of r2: ";r2.area();
    cout<<"\n Len and bed of r3: ";r3.area();
    return 0;
}
