//The lexographically largest element will remain at the top
//internal operation is tree data structure is maintained
//Data not maintained in a linear fashion
//push and pop -> logn
//top -> O(1)
#include<bits/stdc++.h>
using namespace std;

void displayPriorityQueue(priority_queue<int> pq)
{
    cout<<"The elements of the priority queue are: "<<endl;
    priority_queue<int>pq2=pq;
    while(!pq2.empty())
    {
        cout<<pq2.top()<<'\n';
        pq2.pop();
    }
}


int main()
{
    priority_queue<int>pq;
    for(int i=1;i<=5;i++)
        pq.push(i);
    
    displayPriorityQueue(pq);

    cout<<"The size of the priority queue are: "<<pq.size()<<endl;
    cout<<"The top element of the priority queue: "<<pq.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    pq.pop(); 

    displayPriorityQueue(pq);
    
}