#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={44,23,22};

    sort(arr,arr+3);
    
    for(auto it:arr)
        cout<<it<<' ';
}