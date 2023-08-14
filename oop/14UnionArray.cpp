
#include <iostream>
#include <string>

using namespace std;

const int NUM_STUDENTS = 5;

union StudentInfo {
    char name[50];
    int roll;
    float cgpa;
};

int main() {
    StudentInfo students[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin.getline(students[i].name, sizeof(students[i].name));

        cout << "Roll Number: ";
        cin >> students[i].roll;

        cout << "CGPA: ";
        cin >> students[i].cgpa;

        // Clear input buffer
        cin.ignore();
    }

    cout << "Student details:" << endl;
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << "Student " << i + 1 << " - Name: " << students[i].name
             << ", Roll Number: " << students[i].roll
             << ", CGPA: " << students[i].cgpa << endl;
    }

    return 0;
}
