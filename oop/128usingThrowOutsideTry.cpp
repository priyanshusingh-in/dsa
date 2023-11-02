#include<bits/stdc++.h>
using namespace std;
void divide(int x, int y, int z)
{
    cout<<"WE ARE INSIDE THE FUNCTION";
    if((x-y)!=0)
    {
        int R=z/(x-y);
        cout<<"RESULT="<<R;
    }
    else
    {
        throw(x-y);
    }
}
int main()
{
    try
    {
        cout<<"WE ARE INSIDE TRY BLOCK";
        divide(10,20,30);
        divide(10,10,20);
    }
    catch(int i)
    {
        cout<<"COUGHT THE EXCEPTION";
    }
    return 0;
}