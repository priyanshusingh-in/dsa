//dynamic size as compared to an array
//internal operation in a singly linked list
//only back operation

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    cout<<"enter 10 values in vector: \n";
    for(int i=0;i<10;i++)
        v.emplace_back(i);

    cout<<"the elements in vector: ";
    for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<' ';

    cout<<"\nThe front element of vector: "<<v.front();
    cout<<"\nThe last element of vector: "<<v.back();
    cout<<"\nThe size of the vector: "<<v.size();
    cout<<"\nDeleting element from the end: "<<v[v.size()-1];
    v.pop_back();

    cout<<"\nPrinting vector after removing last element: "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<' ';

    cout<<"\nInserting 5 at the beginning:"<<endl;
    v.insert(v.begin(),5);
    cout<<"First element is: "<<v[0]<<endl;

    cout<<"erasing the first element"<<endl;
    v.erase(v.begin());
    cout<<"Now the first element is: "<<v[0]<<endl;

    if(v.empty())
        cout<<"\nVector is empty"<<endl;
    else
        cout<<"\nVector is not empty"<<endl;

    cout<<"The element at the last position is: "<<v.back()<<endl;
    cout<<"Printing elements of the vector v1 using for each loop: \n";
    //for each loop
    for(auto it : v)
     {
         cout<<it<<' ';
     }
     cout<<endl;

    cout<<"Creating a new vector v2 by copying all elements of vector v1: \n";
    vector<int>v2(2,100);
    v.swap(v2);
    cout<<"Elements of vector v2: \n";
    for(auto it:v2)
    {
        cout<<it<<' ';
    }
    cout<<endl;
    v.clear();
    cout<<"Size of vector after clearing the verctor: "<<v.size();

    return 0;
}
