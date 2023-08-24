#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=10;
    char ch='A';
    float c=120.7;
    void *gp;
    gp=&x;
    cout<<*(int*)gp<<endl;
    gp=&ch;
    cout<<*(char*)gp<<endl;
    gp=&c;
    cout<<*(float*)gp<<endl;
    return 0;
}
