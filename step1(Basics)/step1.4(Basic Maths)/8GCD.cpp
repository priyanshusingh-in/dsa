#include <bits/stdc++.h>
using namespace std;

int main() {

    int n1,n2,n,gcd=1;
    cin >> n1 >> n2;
    n=min(n1,n2);
    for(int i=n ; i>=1 ; i--) {
        if((n1%i == 0) && (n2%i==0)) {
            gcd=i;
            break;
        }
    }

    cout<<"GCD of "<<n1<<" and "<<n2<<" is: "<<gcd;

    return 0;
}