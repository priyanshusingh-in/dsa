#include<bits/stdc++.h>
using namespace std;

int main()
{
    enum days{sun,mon,tues,wed,thur,fri,sat};
    days day1,day2;
    day1=sun;
    day2=fri;
    cout<<day1<<'\t'<<day2<<'\n';
    if(day1>day2)
    {
        cout<<"day1 comes after day2";
    }
    else
    {
        cout<<"day1 comes before day2";
    }
    return 0;
}
