#include<bits/stdc++.h>
using namespace std;

void printWeekDays(int day) {
    switch(day) {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    default:
        cout<<"Invalid input!";
    }
}

int main() {
    int day;
    cout<<"Enter day No.: \n";
    cin >> day;
    printWeekDays(day);
    return 0;
}
