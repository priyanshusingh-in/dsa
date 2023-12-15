#include <bits/stdc++.h>
using namespace std;

void check(int num) {
    int count=0;
    for (int i=1 ; i*i <= num ; i++) {
        if (num%i == 0) {
            count++;
        }
    }
    if (count == 2) {
        cout << "Prime";
    }
    else {
        cout << "Not Prime";
    }
}

int main() {
    int num;
    cin >> num;

    if(num == 1) {
        cout << "Neither Prime nor Composite";
        return 0;
    }

    check(num);
    
    return 0;
}