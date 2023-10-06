
#include<bits/stdc++.h>
using namespace std;

class student
{
private:
    int roll_no;
protected:
    char section[10];
public:
    void get_rno()
    {
        cout<<"\nEnter the roll number:";
        cin>>roll_no;
    }
    void show_rno()
    {
        cout<<"\nRoll no:"<<roll_no;
    }
};

class result:protected student
{
private:
    float fees;
public:
    void get_data()
    {
        get_rno();
        cout<<"\nEnter fee:";
        cin>>fees;
        cout<<"\nEnter section:";
        cin>>section;
    }
    void display()
    {
        show_rno();
        cout<<"\n Fees:"<<fees;
        cout<<"\n Section:"<<section;
    }
};

int main()
{
    result obj1;
    obj1.get_data();
    obj1.display();

    //obj1.get_rno();
    //obj1.show_rno();
    //obj1.roll_no=43;

    return 0;
}
