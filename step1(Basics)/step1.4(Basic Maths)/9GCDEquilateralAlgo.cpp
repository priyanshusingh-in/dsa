#include <bits/stdc++.h>
using namespace std;

int main() {

    int a,b,gcd=1;
    cin >> a >> b;
    while(a>0 && b>0) {
        if(a>b)
            a = a%b;
        else
            b = b%a;
    }
    if(a == 0)
        gcd=b;
    else
        gcd=a;

    cout<<"GCD: "<<gcd;

    return 0;
}