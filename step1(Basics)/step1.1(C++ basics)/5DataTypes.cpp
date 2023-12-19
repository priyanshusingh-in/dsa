#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cout << "enter x value: \n";
    cin >> x;
    long y;
    cout << "enter y value: \n";
    cin >> y;
    long long z;
    cout << "enter z value: \n";
    cin >> z;
    float e;
    cout << "enter e value: \n";
    cin >> e;
    double f;
    cout << "enter f value: \n";
    cin >> f;
    string s1;
    cout << "enter a word: \n";
    cin >> s1;
    string s2;
    cout << "enter a sentence: \n";
    cin.ignore();
    getline(cin,s2);
    char ch;
    cout << "enter a character: \n";
    cin >> ch;

    cout << "The values are: \n";
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";
    cout << "z = " << z << "\n";
    cout << "e = " << e << "\n";
    cout << "f = " << f << "\n";
    cout << "Word = " << s1 << "\n";
    cout << "Sentence = " << s2 << "\n";
    cout << "Character = " << ch << "\n";

    return 0;
}
