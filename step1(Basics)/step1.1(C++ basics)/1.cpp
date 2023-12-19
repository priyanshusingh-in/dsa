#include<bits/stdc++.h>
using namespace std;

void output(int number) {
    cout << "Hello World!, My name is Priyanshu Singh :)" << "\n";
    cout << "My mobile number is: " << number << "\n";
}
void input(int& number) {
    cout << "Enter your mobile number: " << "\n";
    cin >> number;
}
int main() {
    int number;
    input(number);
    output(number);
    return 0;
}