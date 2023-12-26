#include <bits/stdc++.h>
using namespace std;

void f(int i, int arr[], int n) {
    if(i>=n/2)
        return;
    swap(arr[i], arr[n-i-1]);
    f(i+1, arr, n);
}

int main() {
    int n;
    cout << "enter array size:\n";
    cin >> n;
    int arr[n];

    cout << "enter array elements:\n";
    for(int i=0 ; i<n ; i++) {
        cin >> arr[i];
    }

    f(0, arr, n);

    cout << "reversed array elements:\n";
    for(auto it : arr)
        cout << it << ' ';
    return 0;
}