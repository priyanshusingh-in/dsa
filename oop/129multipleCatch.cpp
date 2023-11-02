#include<bits/stdc++.h>
using namespace std;
void test(int x)
{
    try
    {
        if(x==1) throw x;
        else if(x==0) throw 'x';
        else if(x==-1) throw 1.0;

        cout<<"END OF TRY BLOCK";
    }
    catch(char c)
    {
        cout<<"COUGHT A CHARACTER\n";
    }
    catch(int m)
    {
        cout<<"CAUGHT AN INTEGER\n";
    }
    catch(double m)
    {
        cout<<"CAUGHT A DOUOBLE\n";
    }   
}

int main()
{
    cout<<"TESTING MULTIPLE CATCHES:\n";
    cout<<"x==1";
    test(1);
    cout<<"x=0\n";
    test(0);
    cout<<"x==-1";
    test(-1);
    cout<<"x==2";
    test(2);

    return 0;
}