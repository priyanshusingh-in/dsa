//wap addition and sub in the base class and in the child class perform multiplication and division

#include<bits/stdc++.h>
using namespace std;

class base
{
public:
    double a,b;
    getData()
    {
        cout<<"enter 1st number: "<<endl;
        cin>>a;
        cout<<"enter 2nd number: "<<endl;
        cin>>b;
    }

    add()
    {
        cout<<"sum: "<<a+b<<endl;
    }
    sub()
    {
        cout<<"difference: "<<a-b<<endl;
    }
};

class child:public base
{
public:
    product()
    {
        cout<<"product: "<<a*b<<endl;
    }
    division()
    {
        cout<<"divison: "<<a/b<<endl;
    }
};

int main()
{
    child obj;
    obj.getData();
    obj.add();
    obj.sub();
    obj.product();
    obj.division();

    return 0;
}
