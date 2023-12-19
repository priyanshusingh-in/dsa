#include<bits/stdc++.h>
using namespace std;

void checkAdult(int age) {
    if (age>=18){
     cout << "You are an Adult!\n";
     cout << "You are Welcome to the Party :)";
    }
    else
        cout << "You are not an Adult!";
}

int main() {
    cout << "Enter your age: ";
    int age;
    cin >> age;
    checkAdult(age);
    return 0;
}
