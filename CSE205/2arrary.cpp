#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={23,445,23,2,-2,32};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            bool flag=true;
            if(arr[i]+arr[j]==0)
            {
                cout<<i<<" and "<<j;
                cout<<endl;
                flag=false;
                break;
            }
            if(flag==false) break;
        }
    }
    return 0;
}