#include<bits/stdc++.h>
using namespace std;

class operation
{
    int a,b,add;
public:
    void get()
    {
        cout<<"enter first value: \n";
        cin>>a;
        cout<<"enter second value: \n";
        cin>>b;
    }
    void sum();
}s;

inline void operation::sum()
{
    add=a+b;
    cout<<"addition of two numbers: \n"<<a+b;
}
int main()
{
    string str;
    cout<<"Program using inline function: \n";
    s.get();
    cout<<"type n for next function call: \n";
    cin>>str;
    s.sum();
    return 0;
}
