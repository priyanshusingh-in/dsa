//wap to find area of a circle using parameterized constructor
#include<iostream>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle(int a)
    {
        radius=a;
    }
    int area()
    {
        return 3.14*radius;
    }
};

int main()
{

    Circle r1(43);
    cout<<"AREA IS "<<r1.area()<<endl;
    Circle r2=Circle(6);
    cout<<"Area is "<<r2.area();

    return 0;
}
