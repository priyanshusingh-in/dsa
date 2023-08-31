#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s1("12345");
    string s2("abcde");
    cout<<"s2="<<s2<<" s1="<<s1<<" ("<<s1.insert(4,s2)<<')'<<endl;
    cout<<"s2="<<s2<<" s1="<<s1<<" ("<<s1.erase(4,5)<<')'<<endl;
    cout<<"s2="<<s2<<" s1="<<s1<<" ("<<s2.replace(1,3,s1)<<endl;
    cout<<"s2="<<s2<<" s1="<<s1<<" ("<<s2.append(s1,2,3)<<')'<<endl;

    return 0;
}
