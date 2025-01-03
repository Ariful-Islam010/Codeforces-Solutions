#include<iostream>
using namespace std;
int main()
{
    char ch;
    string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
    string s;
    cin>>ch;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        int index=keyboard.find(s[i]);
        if(ch=='R')
            s[i]=keyboard[index-1];
        else
            s[i]=keyboard[index+1];
    }
    cout<<s<<endl;
    return 0;
}
