#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1("green apple");
    string str2("red apple");
    if(str1.compare(str2)!=0)
        cout<<str1<<" is not "<<str2<<'\n';
    if(str1.compare(6,5,"apple")==0)
        cout<<"still, "<<str1<<" is an apple\n";
    if(str1.compare(6,5,str2,4,5)==0)
        cout<<"therefore, both are apples\n";

    return 0;
}
