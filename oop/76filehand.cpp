#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    ofstream fileout;
    ifstream filein;
    fileout.open("result.txt",ios::app);
    fileout<<"HELLO EARTH!!!!!\n I AM OPTIMUS PRIME!!!\n";
    fileout.close();

    filein.open("result.txt",ios::in);
    filein.getline(s,1000);
    cout<<s;
    filein.close();
}
