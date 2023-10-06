//wap to create 3 classes with add() function 1st add of 2 nums, 2nd add of 3 nums, 3nd add 4 nums create a class c1 which inherite class b1 b2 b3
#include<bits/stdc++.h>
using namespace std;
class B1
{
public:
    void add()
    {
        cout<<"sum 2 num: "<<3+323<<endl;
    }
};

class B2
{
public:
    void add()
    {
        cout<<"sum 3 num: "<<323+32+4<<endl;
    }
};
class B3
{
public:
    void add()
    {
        cout<<"sum 4 num: "<<42+24+123+2<<endl;
    }
};

class C1:public B1, public B2, public B3
{
public:
    void display()
    {
        cout<<"calling B1 function: "<<endl;
        B1::add();
        cout<<"calling B2 function: "<<endl;
        B2::add();
        cout<<"calling B3 function: "<<endl;
        B3::add();
    }
};

int main()
{

    C1 obj;
    obj.display();

    return 0;
}
