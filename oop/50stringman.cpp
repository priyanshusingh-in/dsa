#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1("12345");
    string s2("abcde");
    cout<<"s1="<<s1<<" s2="<<s2<<endl;
    cout<<s1.append(s2)<<endl;
    cout<<"s1="<<s1<<" s2="<<s2<<endl;
    cout<<s1.append(s2,1,2)<<endl;
    return 0;
}
