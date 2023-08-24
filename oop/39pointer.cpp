#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p,a,**p1;
    cout<<"enter the value of a:";
    cin>>a;
    p=&a;
    p1=&p;
    cout<<"address of variable a using ptr: "<<p<<endl;
    p=p+4;
    cout<<"modified address is: "<<p<<endl;
    *p=200;
    cout<<"value of variable a using ptr is: "<<*p<<endl;
    *p=*p+20;
    cout<<"modified value of variable a is" <<*p<<endl;
    cout<<"address of pointer p is"<<p1<<endl;
}
