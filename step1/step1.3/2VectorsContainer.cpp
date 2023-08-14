#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;
    v.emplace_back(33);
    v.emplace_back(3);
    v.emplace_back(332);
    cout<<v[0]<<' '<<v[1]<<' '<<v[2]<<'\n';
}

void explainPairVector(){
    vector<pair<int,char>>pairVector;
    pairVector.emplace_back(2,'a');
    pairVector.emplace_back(4342,'r');
    cout<<pairVector[1].second<<'\n';
}

void explainVector1(){
    vector<int> v(5,23);
    cout<<v[4]<<'\n';
    cout<<v[2]<<'\n';
    vector<char> v1(4,'a');
    vector<char> v2(v1);
    cout<<v2[0]<<'\n';
}

int main(){
    explainVector();
    explainPairVector();
    explainVector1();
    return 0;
}
