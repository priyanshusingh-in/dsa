/////////////////
//Linear list of elements
//Deletion at front
//Insertion at end
//FIFO
//push() & pop()
////////////////////////

#include<bits/stdc++.h>
using namespace std;

void displayQueue(queue<int>q)
{
    cout<<"The elements of the queue are:"<<endl;
    queue<int>q2=q;
    while(!q2.empty())
    {
        cout<<q2.front()<<"\n";
        q2.pop();
    }
}

int main()
{

    queue<int>q;
    for(int i=1;i<=5;i++)
        q.push(i);
    
    displayQueue(q);

    cout<<"The size of the queue: "<<q.size()<<endl;
    cout<<"The front element of the queue: "<<q.front()<<endl;
    cout<<"popping the front element:"<<endl;
    q.pop();
    displayQueue(q);

    return 0;
}