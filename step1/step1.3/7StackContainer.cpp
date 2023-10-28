//STACK:
//LIFO-Last In First Out.
//NO INDEXING
//NO clear(); function
//All operations are happening in constant time: O(1)
#include<bits/stdc++.h>
using namespace std;

void printStack(stack<int> s)
{
    stack<int>s1=s;
    while(!s1.empty())
    {
        cout<<s1.top()<<'\n';
        s1.pop();
    }
    cout<<endl;
}

int main()
{

    stack<int> s;
    for(int i=1;i<=5;i++)
        s.push(i);
    cout<<"The elements of the stack are:"<<endl;
    printStack(s);

    cout<<"The size of the stack: "<<s.size()<<endl;
    cout<<"The top element of the stack: "<<s.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    s.pop();
    cout<<"the top element of the stack: "<<s.top()<<endl;
    cout<<"Is the stack empty: "<<s.empty()<<endl;
    return 0;
}
