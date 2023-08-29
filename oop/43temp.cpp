//wap to create a class student and ask the user to enter the details like name roll cgpa city using getinfo function and then display the values displayinfo function by using call by value and call the mumber function using pointer.

#include<bits/stdc++.h>
using namespace std;

class student
{
    string name;
    int roll;
    double cgpa;
    string city;
public:
    void getInfo()
    {
        cout<<"enter your name: "<<endl;
        cin>>name;
        cout<<"enter your roll number: "<<endl;
        cin>>roll;
        cout<<"enter your cgpa: "<<endl;
        cin>>cgpa;
        cout<<"enter your city: "<<endl;
        cin>>city;
        displayInfo(name,roll,cgpa,city);
    }

    void displayInfo(string name, int roll, double cgpa, string city)
    {
        cout<<"your name: "<<name<<endl;
        cout<<"enter your roll number: "<<roll<<endl;
        cout<<"enter your cgpa: "<<cgpa<<endl;
        cout<<"enter your city: "<<city<<endl;
    }
};

int main()
{
    student obj;
    obj.getInfo();
    return 0;
}
