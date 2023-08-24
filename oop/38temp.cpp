//wap to perform add using call by val, wap to perform diff using call by add. wap to perform product using call by ref.

#include<bits/stdc++.h>
using namespace std;

 void add(int a, int b)
 {
     cout<<a+b<<endl;
 }

 void diff(int *a, int *b)
 {
     cout<<a-b<<endl;
 }

 void product(int &i, int &j)
 {
     cout<<i*j<<endl;
 }


 int main()
 {
     int a,b;
     cout<<"enter a: \n";
     cin>>a;
     cout<<"enter b: \n";
     cin>>b;

     add(10,32);
     diff(&a,&b);
     product(a,b);

     return 0;


 }
