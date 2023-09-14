//wap to ask the user to enter the value of str1 min 30 char long and perform find, and substring fun on it.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cout<<"enter a string (min 30 char): \n";
    getline(cin,s1);

    if(s1.size()>=30)
    {
        string s2;
        cout<<"enter the substring to find: \n";
        getline(cin,s2);
        int x=s1.find(s2);
        cout<<"the string is present at position: \n"<<x<<'\n';

        int b1,b2;
        cout<<"enter start index of substring: ";
        cin>>b1;
        cout<<"enter length index of substring: ";
        cin>>b2;
        cout<<"the substring is: \n"<<s1.substr(b1,b2);

    }
    else
        cout<<"enter more than 30 characters!!!\n";

    return 0;
}

