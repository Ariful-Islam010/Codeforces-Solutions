#include<iostream>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        int open=0,moves=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                open++;
            }
            else
            {
                if(open>0)
                {
                    open--;
                }
                else
                {
                    moves++;
                }
            }
        }
        cout<<moves<<endl;
    }
}
