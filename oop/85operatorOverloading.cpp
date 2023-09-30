//wap to perform sum of three numbers using binary operator overloading.

#include<bits/stdc++.h>
using namespace std;

class sum
{
public:
    int b,a,c;

    sum()
    {
        c=10;
    }

    void set_data()
    {
        cout<<"enter a: \n";
        cin>>a;
        cout<<"enter b: \n";
        cin>>b;
    }
    int operator+(sum s1)
    {
        return (a+b+s1.c);
    }
};

int main()
{
    int d;
    sum s,t;
    s.set_data();
    d=s+t;
    cout<<"SUM IS:"<<d;
}
