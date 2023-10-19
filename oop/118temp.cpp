#include<bits/stdc++.h>
using namespace std;

int main()
{

    int *ptr;

    {
        int v=23;
        ptr=&v;
        cout<<"Address is(inside block):"<<ptr<<'\n';
    }

    //here ptr is dangling pointer as v is no longer existing
    cout<<"Address if(outside block):"<<ptr;//ptr is dangling pointer(Same address is printed)
    ptr=NULL;//solution to dangling pointer(assinging null address)
    
    return 0;
}