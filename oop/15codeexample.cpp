//wap to create a union named as student having members roll name and cgpa and then store the record of five student using a array of union

#include<bits/stdc++.h>
using namespace std;

struct emp //structure name(emp)
{
    int roll;
    string name;
    float cgpa;
};

int main()
{
    int i;
    emp e[5]; //array of structure
    for(i=0;i<5;i++);
    {
        cout<<"enter the roll number of the employee no.";
        cin>>e[i].roll;
        cout<<"enter the name of the employee no.";
        cin>>e[i].name;
        cout<<"enter the cgpa of the employee no.";
        cin>>e[i].cgpa;
    }
    cout<<"\nNames of all employees: \n";
    int j;
    for(j=0;i<5;i++)
    {
        cout<<e[i].roll<<endl;
        cout<<e[i].name<<endl;
        cout<<e[i].name<<endl;
    }
    cout<<endl;
    return 0;
}
