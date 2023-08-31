//wap to enter a detail of 5 student like name, age, roll, cgpa, and city using array of objects using pointer.


#include<iostream>
using namespace std;

class THuman
{
public:
    string name,city;
    int age,roll;
    float cgpa;
};

int main()
{
    THuman *student[1000];
    for(int i=0;i<5;i++)
    {
        student[i]=new THuman;
    }
    for(int i=0;i<5;i++)
    {
        cout<<"enter details for student "<<i+1<<":"<<endl;
        cin>>student[i]->name>>student[i]->age>>student[i]->roll>>student[i]->cgpa>>student[i]->city;
    }
    for(int i=0;i<5;i++)
    {
        cout<<"details for student "<<i+1<<"--> ";
        cout<<student[i]->name<<"|"<<student[i]->age<<'|'<<student[i]->roll<<'|'<<student[i]->cgpa<<'|'<<fstudent[i]->city<<endl;
    }

    for(int i=0;i<5;i++)
    {
        delete student[i];
    }
}
