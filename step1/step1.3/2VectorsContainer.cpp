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
    cout<<pairVector[1].second;
}

void explainVector1(){

}

int main(){
    explainVector();
    explainPairVector();
    return 0;
}
