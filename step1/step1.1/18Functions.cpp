#include<bits/stdC++.h>
using namespace std;

void printName(string name)
{
    cout << "Hey " << name << endl;
}

int main()
{
    string name, name2;
    cout << "enter your name:\n";
    cin >> name;
    cout << "enter your name: \n";
    cin >> name2;
    printName(name);
    printName(name2);
    return 0;
}
