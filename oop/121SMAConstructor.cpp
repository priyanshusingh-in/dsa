#include<bits/stdc++.h>
using namespace std;

class sample
{
    public:
        sample()
        {
            cout<<"Constructor called"<<endl;
        }
        ~sample()
        {
            cout<<"Destructor called"<<endl;
        }
};

int main()
{
    int n;
    cout<<"\nEnter no. of objects:";
    cin>>n;
    sample* obj1=new sample[n];//array of objects
    delete []obj1;
    return 0;
}