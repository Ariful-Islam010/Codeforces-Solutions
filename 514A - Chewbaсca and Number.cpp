#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='5') s[i]='4';
        else if(s[i]=='6') s[i]='3';
        else if(s[i]=='7') s[i]='2';
        else if(s[i]=='8') s[i]='1';
        else if(s[i]=='9')
        {
            if(i==0) s[i]='9';
            else s[i]='0';
        }
        else s[i]=s[i];
    }
    cout<<s<<endl;
    return 0;
}
