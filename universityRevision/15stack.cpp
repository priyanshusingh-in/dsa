#include<bits/stdc++.h>
using namespace std;

int MAXSIZE=100;

int main()
{
    int stack[MAXSIZE];
    int i, item, data, TOP=-1;
    while(true)
    {
        cout<<"Enter: 1 for PUSH | 2 for POP | 3 for PEEK | 4 for DISPLAY | 5 to EXIT -> \n";
        cin>>item;
        switch(item)
        {
        case 1:
            if(TOP==MAXSIZE-1)
            {
                cout<<"Overflow";
                exit(0);
            }
            cout<<"Enter Value ";
            cin>>data;
            TOP=TOP+1;
            stack[TOP]=data;
            break;
        case 2:

            if(TOP==-1)
            {
                cout<<"UNDERFLOW";
                exit(0);
            }
            TOP=TOP-1;
            break;
        case 3:
            if(TOP==-1)
            {
                cout<<"UNDERFLOW";
                exit(0);
            }
            cout<<stack[TOP]<<'\n';
            break;
        case 4:
            for(int i=TOP;i>=0;i--)
            {
                cout<<stack[i]<<'\n';
            }
            break;
        case 5:
            exit(0);
            break;
        default:
            cout<<"ENTER CORRECT OPTION!!!";
        }
    }
}
