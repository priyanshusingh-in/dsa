//wap to find the largest num from two variables using function template
//if the second number is greater find the sqrt of that if first number is greater print table

#include<bits/stdc++.h>
using namespace std;

template<class T1,class T2>
void greater(T1 num1, T2 num2)
{
    if(num1==num2)
        cout<<"both number are eqqual!!\n";
    else if (num1>num2)
    {
        cout<<num1<<" is greater!!\n";
        for(int i=1;i<=num1;i++)
        {
            cout<<num1*i<<endl;
        }
    }   
    else
    {
        cout<<num2<<" is greater!!\n";
        cout<<"The square root of "<<num2<<" is "<<sqrt(num2)<<endl;
    }
}

int main()
{
    
}