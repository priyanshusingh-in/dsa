#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter a number in octal form: \n";
    cin>>setbase(8)>>num;
    cout<<"value in decimal form "<<setbase(8)<<num<<'\n';
    cout<<"value in hex "<<setbase(16)<<num<<'\n';

    return 0;
}
