#include<bits/stdc++.h>
using namespace std;

class time
{
    int hrs;
public:
    time(int t)
    {
        hrs=t/60;
    }
};

int main()
{
    time t1(85);
    cout<<t1.hrs;

    return 0;
}
