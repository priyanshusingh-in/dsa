#include<bits/stdc++.h>
using namespace std;

class Fruit
{
    public:
    int apples=32, mangoes=22;
};

class Apples:public Fruit
{
    public:
    int appleNum=apples+323;
};

class Mangoes:public Fruit
{
    public:
    int mangoNum=mangoes+3;
};

int main()
{
    Apples oApples;
    cout<<"No. of Apples: "<<oApples.appleNum<<endl;
    Mangoes oMangoes;
    cout<<"No. of Mangoes: "<<oMangoes.mangoNum<<endl;

    cout<<"Total number of Fruites:"<<oApples.appleNum+oMangoes.mangoNum<<endl;

    return 0;
}