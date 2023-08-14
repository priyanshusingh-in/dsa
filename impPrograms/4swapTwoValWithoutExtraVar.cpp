#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=323;
    int y=3256;

    cout<<"Value before swap:-\n";
    cout<<"X: "<<x<<'\n';
    cout<<"Y: "<<y<<'\n';

    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"Value after swap:-\n";
    cout<<"X: "<<x<<'\n';
    cout<<"Y: "<<y<<'\n';

    return 0;
}
