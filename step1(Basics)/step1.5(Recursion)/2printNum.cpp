//https://www.codingninjas.com/studio/problems/print-1-to-n_628290?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
#include <bits/stdc++.h>
using namespace std;

void printnum(int x, int& i, vector<int>& v) {
    if(i > x)
        return;
    v.push_back(i);
    i++;
    printnum(x, i, v);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    int i=1;
    vector <int> v;
    printnum(x, i, v);
    return v;
}

int main() {
    int n;
    cin >> n;
    vector <int> vv = printNos(n);

    for(auto it : vv)
        cout << it << ' ';

}