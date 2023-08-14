#include<bits/stdc++.h>
using namespace std;

struct emp //structure name(emp)
{
    string name;//structure member
};

int main()
{
    emp e[5]; //array of structure
    int i;
    for(i=0;i<5;i++);
    {
        cout<<"enter the name of the employee no.";
        cin>>e[i].name;
    }
    cout<<"\nNames of all employees: \n";
    for(i=0;i<5;i++)
    {
        cout<<e[i].name<<endl;
    }
    cout<<endl;
    return 0;
}
