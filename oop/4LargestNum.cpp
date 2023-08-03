#include<bits/stdc++.h>
using namespace std;

void check(int n1, int n2, int n3)
{
    if((n1>=n2)&&(n1>=n3))
    {
        cout<<n1<<" is greatest!";
    }
    else if((n2>=n1)&&(n2>=n2))
    {
        cout<<n2<<" is greatest!";
    }
    else
        cout<<n3<<" is greatest!";
}

int main()
{
    int n1,n2,n3;
    cout<<"enter 3 numbers: \n";
    cin>>n1>>n2>>n3;
    check(n1,n2,n3);
    return 0;
}
