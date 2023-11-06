//https://takeuforward.org/data-structure/count-digits-in-a-number/
#include<bits/stdc++.h>
using namespace std;


void countDigits(int n){
	// Write your code here.
	int count=0;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	cout<<count;
}

int main()
{
    countDigits(43435);
    return 0;
}