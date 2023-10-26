#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={323,22,15,6,1,0};
    cout<<"The minimum element is: "<<*min_element(v.begin(),v.end());
}