#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
    int length,breadth;
public:
    Rectangle(){}
    Rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }
    Rectangle(Rectangle &l,Rectangle &b)
    {
        length=l.length;
        breadth=b.breadth;
    }
    void display()
    {
        cout<<length<<" "<<breadth<<endl;
    }
};

int main()
{
    Rectangle r1(10,20);
    Rectangle r2(r1);
    Rectangle r3=r1;
    Rectangle r4;
    r4=r1;

    cout<<"\n Len and bed of r1: ";r1.display();
    cout<<"\n Len and bed of r2: ";r2.display();
    cout<<"\n Len and bed of r3: ";r3.display();
    cout<<"\n Len and bed of r4: ";r4.display();
    return 0;
}
