#include<iostream>
using namespace std;
template<class T>
T square(T num)
{
    return (num*num);
}

int main()
{
    int num1=3;
    cout<<"\nSquare of "<<num1<<" = "<<square<int>(num1);
    float num2=3.4;
    cout<<"\nSquare of "<<num2<<" = "<<square<float>(num2);
    double num3=3.549;
    cout<<"\nSquare of "<<num3<<" = "<<square<double>(num3);

    return 0;
}