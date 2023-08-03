#include<bits/stdc++.h>
using namespace std;

class item
{
private:
    int number;
    float cost;
public:
    void getData(int a, float b);
    void putData(void)
    {
        cout<<"number: "<<number<<'\n';
        cout<<"cost: "<<cost<<'\n';
    }
};

void item::getData(int a, float b)
{
    number=a;
    cost=b;
}

int main()
{
    item x;
    cout<<"\n object x"<<'\n';
    x.getData(133,444.23);
    x.putData();

    item y;
    cout<<"\n object y"<<'\n';
    y.getData(32442,12.3);
    y.putData();

    item z;
    cout<<"\n object z"<<'\n';
    return 0;
}
