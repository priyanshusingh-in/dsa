//wap to create a class student having parameterized constructor with parameter integer, string and double.
//to implement catching class type as exception

#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class student
{
    int err_code;
    char *err_desc;
    string err_str;
    public:
    student(int c,string str,char *d)
    {
        err_code=c;
        err_str=str;
        err_desc=new char[strlen(d)];
        strcpy(err_desc,d);
    }
    void err_display(void)
    {
        cout<<"Error code: "<<err_code<<" error description: "<<err_desc;
    }
};

int main()
{
    try
    {
        cout<<"PRESS ANY KEY:";
        getch();
        throw student(99,"test exceptioni");
    }
    catch(student e)
    {
        cout<<"Exception cought successfully";
        e.err_display();
    }
    getch();

    return 0;
}