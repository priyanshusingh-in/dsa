#include<bits/stdc++.h>
using namespace std;

class Number{
    int x,y,z;
public:
    Number(int n1, int n2, int n3)
    {
        x=n1;y=n2;z=n3;
        cout<<"\nBefore overloading: ";
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;
    }
    friend void operator=(Number);
};

void operator-(Number obj)
{
    cout<<"\nAfter overloading:";
    cout<<-obj.x<<endl;
    cout<<-obj.y<<endl;
    cout<<-obj.z;
}

int main()
{
    Number N(7,8,9);
    -N;//operator-(N)

}
