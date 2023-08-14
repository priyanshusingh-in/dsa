#include<bits/stdc++.h>
using namespace std;

union employee
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    cout<<"Displaying info."<<endl;
    employee e1;
    cout<<"enter full name: "<<endl;
    cin.get(e1.name,50);
    cout<<"Name: "<<e1.name<<endl;
    cout<<"enter age: "<<endl;
    cin>>e1.age;
    cout<<"age: "<<e1.age<<endl;
    cout<<"enter salary: "<<endl;
    cin>>e1.salary;
    cout<<"salary: "<<e1.salary<<endl;
    return 0;
}

