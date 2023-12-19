#include<bits/stdc++.h>
using namespace std;

void add2Num(int n1, int n2)
{
    cout << "sum is: " << n1+n2 << "\n";
}

int substract2Num(int n1, int n2)
{
    return n1-n2;
}

int main()
{
    int n1,n2;
    cout << "enter 2 numbers: \n";
    cin >> n1 >> n2;

    add2Num(n1,n2);

    cout << "Difference is: " << substract2Num(n1,n2) << "\n";

    cout << "Max number is: " << max(n1,n2) << "\n";
    cout << "Min number is: " << min(n1,n2) << "\n";

    return 0;
}
