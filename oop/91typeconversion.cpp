#include<bits/stdc++.h>
using namespace std;

class student
{
private:
    int rollno;
    float fees;
    double dd;
public:
    student(int a, float m, double d)
    {
        rollno=a;
        fees=m;
        dd=d;
    }
    operator int()
    {
        return(rollno);
    }
    operator float()
    {
        return(fees);
    }
    operator double()
    {
        return(dd);
    }
};

int main()
{
    int j;
    float f;
    double k;
    student st(5,4200.50,23233.33);
    j=st;
    f=st;
    k=st;

    cout<<"\nValue of j: "<<j<<"\n";
    cout<<"\nValue of f: "<<f<<"\n";
    cout<<"\nValue of k: "<<k<<"\n";

    return 0;
}
