#include <bits/stdc++.h>
using namespace std;

int reverse(int num) {
    int temp = 0;
    while(num > 0) {
        int digit = num % 10;
        temp = temp * 10 + digit;
        num = num / 10;
    }
    return temp;
}

int main() {
    int num;
    cin >> num;
    int rev = reverse(num);
    if (num == rev) {
        cout << "Palindrome Number\n";
    }
    else {
        cout << "Not Palindrome Number";
    }
    return 0;
}