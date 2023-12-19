#include <bits/stdc++.h>
using namespace std;

int i=1;
void rFun() {
    if(i>42)
        return;
    cout << i << '\n';
    i++;
    rFun();
}

int main() {
    rFun();
}