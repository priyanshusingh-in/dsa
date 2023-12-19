#include<bits/stdc++.h>
using namespace std;

void doSomething(int num) {
    cout<<"entered doSomething() function!\n";
    num+=654;
    cout<<num<<'\n';
    num+=43;
    cout<<num<<'\n';
    cout<<"exiting doSomething() function!\n";
}

int main() {
    int num=2323;
    cout<<num<<'\n';
    doSomething(num);
    cout<<num<<'\n';
    return 0;
}
