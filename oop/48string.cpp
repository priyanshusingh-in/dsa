#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1("man");
    string s2="hi";
    string s3;
    s3=s1;
    string s4="LPU";
    string s5=s2+s4;
    cout<<"s3="<<s3<<endl;
    s3="neither"+s1+"nor";
    s3+=s2;
    cout<<"s3="<<s3<<endl;
    s1.swap(s2);
    cout<<s1<<"nor"<<s2<<endl;
    cout<<s5;
}
