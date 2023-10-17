#include<bits/stdc++.h>
using namespace std;

void explainPair() {
    pair<int,string> p={1,"Priyanshu Singh"};
    cout<<p.first<<' '<<p.second<<'\n';

    pair<int,pair<char,string>> p2={2,{'A',"Hello Pair!"}};
    cout<<p2.first<<' '<<p2.second.first<<' '<<p2.second.second<<'\n';
    pair<int,int> arr[]={{2,3}, {23,4}, {342,4}, {43,2}};
    cout<<arr[0].second;
}

int main() {
    explainPair();
    return 0;
}