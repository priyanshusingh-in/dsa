//wap to find the multi values and cubic values using inline function
#include<bits/stdc++.h>
using namespace std;

inline void multi(int n)
{
    cout<<"multiplication value: "<<n*n<<'\n';
}

inline void cubic(int n)
{
    cout<<"Cubic value: "<<n*n*n<<'\n';
}

int main()
{
    int n;
    cout<<"enter a number: \n";
    cin>>n;
    multi(n);
    cubic(n);

    return 0;
}
