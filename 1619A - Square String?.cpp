#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        if(n%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
        int d=n/2;
        int count=0;
        for(int i=0;i<d;i++)
        {
            if(s[i]!=s[n-d+i])
            {
                count++;
            }
        }
        if(count==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
