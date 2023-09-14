#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1="lovely professional university";
    cout<<str1.find("ve")<<endl;
    cout<<str1.rfind("ve")<<endl<<endl;
    cout<<str1.find_first_of('l')<<endl;
    cout<<str1.find_last_of('l')<<endl<<endl;

    return 0;
}

