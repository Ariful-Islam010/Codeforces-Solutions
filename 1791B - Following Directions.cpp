#include<iostream>
using namespace std;
int main()
{
    int t,n,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        int found=0;
        int a=0,b=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='U')
                a++;
            else if(s[i]=='D')
                a--;
            else if(s[i]=='R')
               b++;
            else
                b--;
         if(a==1 && b==1)
         {
           found=1;
           break;
         }
        }
        if(found==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
