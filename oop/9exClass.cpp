//wap to create a class student having data members name, roll, and cgpa. and two member function getdata and displaydata, define the defination of these member function outside the class

#include<bits/stdc++.h>
using namespace std;

class student
{
private:
    string name;
    int roll;
    float cgpa;
public:
    void getData(string nam,int r, float cg);
    void displayData(void);
};

void student::getData(string nam, int r, float cg)
{
    name=nam;
    roll=r;
    cgpa=cg;
}

void student::displayData(void)
{
    cout<<"Name: "<<name<<'\n'<<"Roll: "<<roll<<'\n'<<"CGPA: "<<cgpa<<'\n';
}

int main()
{
    student x;
    cout<<"Working with object x: "<<'\n';
    x.getData("Priyanshu Singh",18,7.5);
    x.displayData();
    return 0;
}
