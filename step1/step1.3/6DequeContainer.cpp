#include<bits/stdc++.h>
using namespace std;

void printDeque(deque<int>dq)
{
    for(auto it : dq)
    {
        cout<<it<<' ';
    }
}

int main()
{

    deque<int> dq;
    dq.push_back(19);
    dq.push_back(29);
    dq.push_front(39);
    dq.push_front(49);
    dq.push_front(59);

    cout<<"The element in the deque are: ";
    printDeque(dq);

    cout<<"The size of deque is: "<<dq.size()<<endl;
    cout<<"The first element of deque is: "<<dq.front()<<endl;
    cout<<"Deleting the first element:"<<endl;
    dq.pop_front();
    printDeque(dq);
    cout<<"The last element of the deque: "<<dq.back()<<endl;
    cout<<"Deleting the last element:"<<endl;
    dq.pop_back();
    printDeque(dq);

    return 0;
}
