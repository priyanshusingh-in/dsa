#include<bits/stdc++.h>
using namespace std;
class Employee
{
    int id;
    float salary;
    public:
        void input()
        {
            cout<<"\nEnter id:";
            cin>>id;
            cout<<"\nEnter salary:";
            cin>>salary;
        }
        void display()
        {
            cout<<"\n"<<id<<" "<<salary;
        }
};

int main()
{
    int n;
    cout<<"\nEnter number of employees:";
    cin>>n;
    Employee *p = new Employee[n];
    Employee *d=p;
    Employee *flag=p;
    if(p==NULL)
    {
        cout<<"\nMumory allocation faliure";
        exit(1);
    }
    for(int i=0;i<n;i++)
    {
        p->input();
        p++;
    }
    for(int i=0;i<n;i++)
    {
        d->display();
        d++;
    }
    delete []flag;
    return 0;
}