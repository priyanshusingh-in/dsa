#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1="bcme";
    string s2="abcrome";
    string s3="";
    cout<<s1.compare(s2)<<endl;
    cout<<s1.compare(2,2,s2,5,2)<<endl;
    return 0;
}
