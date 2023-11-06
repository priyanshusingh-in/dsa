//wap to create a user defined function: check(), which takes input for 2 integers, if the square of the sum of
//these two integers is odd, then this function should throw an exception, with message:
//"INVALID INPUT CAUSED AN EXCEPTION". call this function in main() function, and also prepare a suitable catch
//block to handle the exception.
#include<bits/stdc++.h>
using namespace std;

void check()
{
    int num1,num2;
    cout<<"Enter num1 and num2:";
    cin>>num1,num2;
    int sol=pow(num1+num2,2);
    try
    {
        if(sol%2!=0)
            throw sol;
    }
    catch(int sol)
    {
        cout<<"INVALID INPUT CAUSED AN EXCEPTION";
    }
}

int main()
{
    check();
    return 0;
}