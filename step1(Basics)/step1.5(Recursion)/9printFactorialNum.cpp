//https://www.codingninjas.com/studio/problems/factorial-numbers-not-greater-than-n_8365435?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<bits/stdc++.h>
using namespace std;

long long f(long long n) {
    if(n==0) return 1;
    return n * f(n-1);
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> v;
    for(long long i=1 ; i<=n ; i++) {
        long long temp=f(i);
        if(temp<=n)
            v.push_back(temp);
        else
            break;
    }
    return v;
}

int main() {
    int n;
    cin >> n;

    vector<long long> v=factorialNumbers(n);

    for(auto it : v)
        cout << it << ' ';

    return 0;
}