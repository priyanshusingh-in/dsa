//wap to display your name and perform all basic arthimatic operations i.e. +,-,/,*

#include<bits/stdc++.h>
using namespace std;

void userInputOutput()
{
    int a1,b1;
    string name;
    cout<<"enter your name: \n";
    cin.ignore();
    cin>>name;
    cout<<"enter first num: \n";
    cin>>a1;
    cout<<"enter second num: \n";
    cin>>b1;

    cout<<"sum: "<<a1+b1<<" diff: "<<a1-b1<<" product: "<<a1*b1<<" div: "<<a1/b1;
}

int main()
{
    cout<<"Priyanshu Singh\n";
    int a=13;
    int b=332;
    int sum=a+b;
    int diff=a-b;
    double div=a/b;
    double multi=a*b;
    cout<<sum<<' '<<diff<<' '<<div<<' '<<multi<<'\n';
    userInputOutput();
    return 0;
}
