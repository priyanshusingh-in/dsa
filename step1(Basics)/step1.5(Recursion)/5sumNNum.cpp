//https://www.codingninjas.com/studio/problems/sum-of-first-n-numbers_8876068?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <bits/stdc++.h>
using namespace std;

long long sumFirstN(long long n) {
    // Write your code here.
    if(n == 0)
        return 0;
    else
        return n + sumFirstN(n-1);
}

int main() {

    long long n;
    cin >> n;
    cout << sumFirstN(n);
    return 0;
}