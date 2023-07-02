#include<bits/stdc++.h>
using namespace std;

void checkGrade(int marks) {
    cout << "Your Grade is: ";
    if(marks<25)
        cout << "F";
    else if(marks<=44)
        cout << "E";
    else if(marks<=49)
        cout << "D";
    else if(marks<=59)
        cout << "C";
    else if(marks<=79)
        cout << "B";
    else if(marks<=100)
        cout << "A";
}
int main() {
    int marks;
    cout << "Enter your marks: \n";
    cin >> marks;
    checkGrade(marks);
    return 0;
}
