#include<bits/stdc++.h>
using namespace std;

class BC
{
    public:
        virtual void show()
        {
            cout<<"\nShow() of base class"<<endl;
        }
};

class DC:public BC
{
    public:
        void show()
        {
            cout<<"\nShow() of derived class"<<endl;
        }
};

int main()
{
    BC *bptr;
    BC base;
    bptr=&base;
    cout<<"\n------Runtime polymorphism------";
    bptr->show();
    DC derived;
    bptr=&derived;
    cout<<"bptr now points to derived obj\n";
    bptr->show();
    return 0;
}