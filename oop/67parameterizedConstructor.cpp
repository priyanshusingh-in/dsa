#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;
public:
    Rectangle(int a, int b)
    {
        length=a;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
};

int main()
{

    Rectangle(5,6);
    cout<<"AREA IS "<<r1.area()<<endl;
    Rectangle r2=Rectangle(6,7);
    cout<<"Area is "<<r2.area();

    return 0;
}
