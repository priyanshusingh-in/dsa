#include<bits/stdc++.h>
using namespace std;

class binary
{
    int x,y;
public:
    binary()
    {
        x=0;
        y=0;
    }
    binary(int x1, int y1)
    {
        x=x1;
        y=y1;
    }
    friend binary operator+(binary,binary);
    void show_data()
    {
        cout<<x<<" "<<y<<"\n";
    }
};

binary operator+(binary o1,binary o2)
{
    binary temp;
    temp.x=o1.y+o2.x;
    temp.y=o1.y+o2.y;
    return temp;
}

int main()
{
    binary O1(1,2),O2(3,4),O3;
    O3=O1+O2;//O3=operator+(o1+o2)
    o3.show_data();

    return 0;
}


