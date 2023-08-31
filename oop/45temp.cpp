//wap to perform all arthemetic operation using this pointer

#include<iostream>
using namespace std;

class Test
{
    int a,b;
public:
    void show(int a, int b)
    {
        this->a=a;
        this->b=b;
    }

    void arth(int a, int b)
    {
        cout<<"adding: "<<this->a+b<<endl;
        cout<<"difference: "<<this->a-this->b<<endl;
        cout<<"product: "<<a*b<<endl;
        cout<<"division: "<<a/this->b<<endl;
    }
    void display()
    {
        cout<<a<<endl<<b<<endl;
    }
};


int main()
{
    Test t;
    t.show(10,20);
    t.display();
    t.arth(323,42);

    return 0;
}
