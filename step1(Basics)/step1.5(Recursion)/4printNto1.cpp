//https://www.codingninjas.com/studio/problems/n-to-1-without-loop_8357243?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <bits/stdc++.h>
using namespace std;

void printN(vector <int>& v, int x) {
    if(x<1)
        return;
    v.push_back(x);
    x--;
    printN(v, x);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector <int> v;
    printN(v, x);
    return v;
}

int main() {

    int n;
    cin >> n;
    vector<int> v = printNos(n);

    for(auto it : v)
        cout << it << ' ';

    return 0;
}