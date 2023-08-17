//wap to ask user to enter 5 sub marks calc the total then print it using with reutn type and with parameter, using without return and with parameter

#include<bits/stdc++.h>
using namespace std;

string fun1(int arr[])
{
    cout<<"inside fun1\n";
    for(int i=0;i<5;i++)
    {
        cout<<"marks of subject "<<i<<'\n';
        cout<<arr[i]<<'\n';
    }
    return "end of fun1\n";
}

void fun2(int arr[])
{
    cout<<"inside fun2\n";
    for(int i=0;i<5;i++)
    {
        cout<<"marks of subject "<<i<<'\n';
        cout<<arr[i]<<'\n';
    }
    cout<<"end of fun2\n";
}

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cout<<"enter marks of subject "<<i<<'\n';
        cin>>arr[i];
    }

    cout<<fun1(arr);
    fun2(arr);
    return 0;
}
