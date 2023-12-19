//https://www.codingninjas.com/studio/problems/count-digits_8416387?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
#include<bits/stdc++.h>
using namespace std;

int count(int n)
{
    int count=0;
    int x=n;
    while(x!=0)
    {
        int digit=x%10;
        if(digit!=0 && n%digit==0)
            count++;
        x=x/10;
    }
    return count;
}

int main()
{
    int num;
    cin>>num;
    cout<<count(num);
    return 0;
}