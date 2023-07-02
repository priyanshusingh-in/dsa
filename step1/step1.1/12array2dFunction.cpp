#include<bits/stdc++.h>
using namespace std;

void array2dInput(int** arr2D, int r, int c) {
    arr2D = new int*[r];
    for(int i=0 ; i<=r-1 ; i++) {
        arr2D[i]=new int[c];
        for(int j=0 ; j<=c-1 ; j++) {
            cout << "enter the element at [" << i << "]" << "[" << j << "]\n";
            cin >> arr2D[i][j];
        }
    }
}

void array2dOutput(int** arr2D, int r, int c) {
    cout << "---------------------------------------------------------\n";
    for(int i=0; i<=r-1; i++) {
        for(int j=0; j<=c-1; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    cout << "enter no. of rows: \n";
    int r;
    cin >> r;
    cout << "enter no. of columns: \n";
    int c;
    cin >> c;
    int** arr2D;
    array2dInput(arr2D,r,c);
    array2dOutput(arr2D,r,c);

    for(int i=0; i<r;i++) {
        delete[] arr2D[i];
    }
    delete[] arr2D;

    return 0;
}
