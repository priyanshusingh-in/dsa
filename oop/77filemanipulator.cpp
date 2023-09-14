#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[30];
    ofstream fileout;
    fstream file;
    fileout.open("result.txt",ios::out);
    fileout<<"Hello WOrld";
    fileout.close();
    file.open("result.txt",ios::out);
    cout<<file.tellg();
    cout<<file.tellp();
    file.seekp(6);
    file.seekg(6);
    cout<<file.tellg();
    cout<<file.tellp();
    file>>s;
    cout<<s;

    return 0;
}
