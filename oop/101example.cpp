#include<iostream>
using namespace std;

class Student {
public:
    int subject1, subject2, subject3, subject4, subject5;

    void getMarks() {
        cout << "Enter marks of five subjects: ";
        cin >> subject1 >> subject2 >> subject3 >> subject4 >> subject5;
    }
};

class Derived1 : public Student {
public:
    int total;

    void calculateTotal() {
        total = subject1 + subject2 + subject3 + subject4 + subject5;
    }
};

class Derived2 : public Derived1 {
public:
    double percentage;

    void calculatePercentage() {
        percentage = (<double>(total) / 500.0) * 100;
    }

    void display() {
        cout << "Percentage is " << percentage << "%" << endl;
    }
};

int main() {
    Derived2 obj;
    obj.getMarks();
    obj.calculateTotal();
    obj.calculatePercentage();
    obj.display();
    return 0;
}

