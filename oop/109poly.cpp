#include<bits/stdc++.h>
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
            cout<<"\nPrinting messgae in derived class"<<endl;
        }
        void show()
        {
            cout<<"\nshow() of derived class"
        }
};

int main()
{
    BC *bptr;
    BC *base;
    bptr=&base;//base pointer can point towards base class
    cout<<"bptr pointes to base objects\n";
    bptr->show();
    //derived class
    DC derived;
    bptr=&derived;//base pointer can point towards derived class
    cout<<"bptr now points to derived objects\n";
    //bptr->printDC();//Base pointer cannot access specific member of derived directly(error)
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