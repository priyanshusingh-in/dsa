#include<bits/stdc++.h>
using namespace std;

struct employee
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    employee e1;
    cout<<"enter full name: "<<endl;
    cin.get(e1.name,50);
    cout<<"enter age: "<<endl;
    cin>>e1.age;
    cout<<"enter salary: "<<endl;
    cin>>e1.salary;
    cout<<"Displaying info."<<endl;
    cout<<"Name: "<<e1.name<<endl;
    cout<<"age: "<<e1.age<<endl;
    cout<<"salary: "<<e1.salary<<endl;
    return 0;
}
