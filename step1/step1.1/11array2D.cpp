#include<bits/stdc++.h>
using namespace std;

int main() {
    int r,c;
    cout << "enter the no. of row: \n";
    cin >> r;
    cout << "enter the no. of columns: \n";
    cin >> c;

    int arr2D[r][c];
    for(int i=0 ; i<=r-1 ; i++) {
        for(int j=0 ; j<=c-1 ; j++) {
            cout << "enter the element at [" << i << "]" << "[" << j << "]\n";
            cin >> arr2D[i][j];
        }
    }
    cout << "---------------------------------------------------------\n";
    for(int i=0; i<=r-1; i++) {
        for(int j=0; j<=c-1; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
