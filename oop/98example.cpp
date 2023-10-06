//wap with 2 classes vehical as a base class and car as a derived class, which inherites the properties from the vehical class for calculating the speed.
//the base class feteches the input as a float value, whereas the derived class calculates and prints the output as a float value.

#include<bits/stdc++.h>
using namespace std;

class vehicle
{
public:
    float distance;
    float time;

    void get_data()
    {
        cout<<"enter distance(in km): "<<endl;
        cin>>distance;
        cout<<"enter time(in hrs): "<<endl;
        cin>>time;
    }
};

class vehicle:public car
{
public:
    void clac(float distance,float time)
    {
        cout<<"speed is: "<<distance/time<<endl;
    }
};

int main()
{
    car obj;
    obj.get_data();
    obj.calc();

    return 0;
}
