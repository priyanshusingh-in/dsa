#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class error
{
    int err_code;
    char *err_desc;
    public:
    error(int c,char *d)
    {
        err_code=c;
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
        throw error(99,"test exceptioni");
    }
    catch(error e)
    {
        cout<<"Exception cought successfully";
        e.err_display();
    }
    getch();

    return 0;
}