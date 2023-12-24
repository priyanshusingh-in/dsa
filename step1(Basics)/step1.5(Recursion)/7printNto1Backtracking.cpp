#include <bits/stdc++.h>
using namespace std;

void f(int N, int i) {
    if(i>N)
        return;
    f(N,i+1);
    cout << i << ' ';
}

int main() {
    int N;
    cin >> N;
    f(N,1);
    return 0;
}