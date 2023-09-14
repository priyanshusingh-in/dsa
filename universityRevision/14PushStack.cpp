#include<bits/stdc++.h>
using namespace std;

int main()
{
    int maxStack=10;
    int stack[maxStack];

    int topStack;

    cout<<"enter no. of element to enter: ";
    cin>>topStack;

    for(int i=0;i<topStack;i++)
    {
        cout<<"enter value at "<<i<<" : ";
        cin>>stack[i];
    }

    for(int i=topStack;i>0;i--)
    {
        cout<<" value at "<<i<<" : "<<stack[i]<<'\n';
    }

    return 0;
}
