#include<bits/stdc++.h>
using namespace std;
class A
{
    int x;
public:
    void getdata()
    {
        cout<<"\n Enter val of x:"<<endl;
        cin>>x;
    }
    void showdata()
    {
        cout<<"\n Entered value is:"<<x<<endl;
    }
};

int main()
{
    A obj1;
    A *ptr;
    ptr=&obj1;
    ptr->getdata();
    ptr->showdata();
    (*ptr).getdata();
    (*ptr).showdata();
    return 0;
}
