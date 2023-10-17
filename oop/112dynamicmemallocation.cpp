#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p=NULL;
    p=new int;
    if(p==NULL)
    {
        cout<<"\n Memory allocation faliaur";
        exit(1);
    }
    else
    {

        cout<<"\nMemory allocated";
        *p=12;
        *p+=10;
        cout<<"integer value stored is:"<<*p;
        delete p;
        cout<<"\n mem deallocated";
    }
    return 0;
}