#include<iostream>
using namespace std;
int main()
{
    string c="codeforces";
    int t,i;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int count=0;
        for(i=0;i<=s.length();i++)
        {
            if(s[i]!=c[i]) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
