#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5]={2,3,4,5,6};
    arr[3]=18;
    arr[0]+=3323;
    int i=0;
    int l=sizeof(arr)/sizeof(arr[0]);
    while(i<=l-1) {
        cout << " | "<< arr[i] << " | ";
        i++;
    }
    return 0;
}
