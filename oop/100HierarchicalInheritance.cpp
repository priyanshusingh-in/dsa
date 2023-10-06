#include<iostream>
using namespace std;

class M
{
protected:
    int x;
public:
    void set(int a)
    {
        x=a;
    }
};

class N:public M
{
public:
    void display()
    {
        cout<<"\nx:"<<x<<"accessed in derived class N";
    }
};

class O:public M
{
public:
    void display()
    {
        cout<<"\nx:--"<<x<<"accessed in derived Class O";
    }
};

class P:public M
{
public:
    void display()
    {
        cout<<"\nx:--"<<x<<"accessed in derived Class P";
    }
};

int main()
{
    N obj1;
    O obj2;
    P obj3;
    obj1.set(12);
    obj1.display();
    obj2.set(28);
    obj2.display();
    obj3.set(28);
    obj3.display();
    return 0;
}
