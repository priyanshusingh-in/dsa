#include<bits/stdc++.h>
#include<fstream>

using namespace std;
int main()
{
    char s[10];
    ifstream inf("result.txt");
    inf.getline(s,' ');

    inf.close();

    cout<<s;


    return 0;
}
