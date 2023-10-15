#include<iostream>
using namespace std;
class BC
{
public:
    void printBC()
    {
        cout<<"\nPrinting message in base class"<<endl;
    }
    void show()
    {
        cout<<"\nshow() of base class"<<endl;
    }
};

class DC:public BC
{
public:
    void printDC()
    {
        cout<<"\nPrinting messgage in derived class"<<endl;
    }
    void show()
    {
        cout<<"\nshow() of base class"<<endl;
    }
};

int main()
{
    BC *bptr;
    BC base;
    bptr=&base;
    cout<<"bptr points to base obj\n";
    bptr->show();
    DC derived;
    bptr=&derived;
    cout<<"bptr now points to derived objs\n";
    bptr->show();
    DC *dptr;
    dptr=&derived;
    cout<<"dptr is derived type pointer\n";
    dptr->show();
    dptr->printDC();
    cout<<"Using ((DC*)bptr)\n";
    ((DC*)bptr)->show();
    ((DC*)bptr)->printDC();

    return 0;
}
