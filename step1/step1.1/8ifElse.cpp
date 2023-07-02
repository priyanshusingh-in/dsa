#include<bits/stdc++.h>
using namespace std;

void checkEligiblity(int age) {
    if(age<18)
        cout << "not eligible for job";
    else if(age<=57) {
        cout << "eligible for job";
        if(age>=55)
            cout << ", but retirement soon.";
    }
    else
        cout << "retirement time";
}

int main() {
    int age;
    cout << "enter your age: \n";
    cin >> age;
    checkEligiblity(age);
    return 0;
}
