//https://www.codingninjas.com/studio/problems/-print-n-times_8380707?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
#include <bits/stdc++.h>
using namespace std;

int i=1;
void printNTimes(int n) {
	// Write your code here.
	if(n<1)
		return;
	cout << "Coding Ninjas ";
	n--;
	printNTimes(n);
}

int main() {
    int n;
    cin >> n;
    printNTimes(n);
    return 0;
}