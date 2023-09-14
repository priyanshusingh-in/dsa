#include<bits/stdc++.h>
using namespace std;

class counter
{
    int id;
public:
    counter(int i)
    {
        id=i;
        cout<<"constructor of object with id="<<id<<endl;
    }
    ~counter()
    {
        cout<<"Destructor with id="<<id<<endl;
    }
};
int main()
{
    counter c1(1);
    counter c2(2);
    counter c3(3);
    cout<<"end of main"<<endl;

    return 0;
}
