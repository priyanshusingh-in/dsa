#include<bits/stdc++.h>
using namespace std;

void displayPriorityQueue(priority_queue<int,vector<int>,greater<int>>pq)
{
    cout<<"The elements of the priority queue are: "<<endl;
    priority_queue<int,vector<int>,greater<int>>pq2=pq;
    while(!pq.empty())
    {
        cout<<pq.top()<<'\n';
        pq.pop();
    }
}

int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=1;i<=5;i++)
        pq.push(i);

    displayPriorityQueue(pq);

    cout<<"The size of the priority queue: "<<pq.size()<<'\n';
    cout<<"The top element of the priority queue: "<<pq.top()<<'\n';
    cout<<"Pop the top element: "<<endl;
    pq.pop();
    displayPriorityQueue(pq);

    return 0;

}