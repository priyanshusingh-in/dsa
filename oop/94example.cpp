//wap to create a base class employee and declare a function get data and ask the user to enter employee id
//employee name employee salary and then create a child class named as employee1 and display all the
//information that you have asked in the base class.
#include<bits/stdc++.h>
using namespace std;
class employee
{
public:
    int empID;
    double sal;
    string name;
    getData()
    {
        cout<<"enter employee ID: "<<'\n';
        cin>>empID;
        cout<<"enter employee salary: "<<'\n';
        cin>>sal;
        cout<<"enter employee name: "<<'\n';
        cin.ignore();
        getline(cin,name);
    }
};

class employee1:public employee
{
public:
    display()
    {
        getData();
        cout<<"ID: "<<empID<<'\n';
        cout<<"Salary: "<<sal<<'\n';
        cout<<"Name: "<<name<<'\n';
    }
};


int main()
{

    employee1 obj;
    obj.display();

    return 0;
}
