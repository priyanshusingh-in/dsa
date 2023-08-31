#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1="welcome";
    string str2="welldone";
    int x=str1.compare(str2);
    if(x==0)
    {
        cout<<"String are same";
    }
    else
        cout<<"String are different";
    cout<<endl<<str1.compare(0,3,str2,0,3);

    return 0;
}
