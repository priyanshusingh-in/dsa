#include<bits/stdc++.h>
using namespace std;

void passByRef(int &num)
{
    cout<<"entering function\n";
    num+=343;
    cout<<num<<'\n';
    cout<<"exiting function\n";

}

int main()
{
    int num=3;
    cout<<num<<'\n';
    passByRef(num);
    cout<<num<<'\n';

    return 0;
}
