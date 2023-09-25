#include<bits/stdc++.h>
using namespace std;
int main()
{

    char s[80];
    cout<<"enter a string";
    cin>>s;
    int len=strlen(s);
    fstream file;
    file.open("test.txt",ios::out);
    for(int i=0;i<len+1;i++)
        file.put(s[i]);
    file.seekg(0);
    file.close();
    file.open("text.txt",ios::in);
    char ch;
    while(file)
    {
        file.get(ch);
        cout<<ch;
    }
    file.close();
    return 0;
}
