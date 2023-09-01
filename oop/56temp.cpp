//wap to ask the user to enter 2 string values having strings size should be minimum 15 characters in each string
//1)perform string concatination without using third string variable
//2)perform comparison operation on string1 index no. 6 and no. of char=4 with string2 index no.=10 and no.of char=4
//3)perform erase function to set string1 to its original value

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cout<<"enter s1(min 15 char): \n";
    getline(cin,s1);
    cout<<"enter s2(min 15 char): \n";
    getline(cin,s2);
    int s1L=s1.length();
    int s2L=s2.length();

    if((s1.length()>=15 && s2.length()>=15))
    {
    cout<<"Operation 1 Concat: \n";
    s1=s1+s2;
    cout<<"s1 + s2 = "<<s1<<'\n';

    cout<<"Operation 2 campare: \n";
    cout<<s1.compare(6,4,s2,10,4)<<'\n';

    cout<<"Operation 3 erase: \n";
    s1=s1.erase(s1L,s2L);
    cout<<"Value of s1 in original form: \n";
    cout<<s1;
    }
    else
        cout<<"enter min 15 characters";
    return 0;
}
