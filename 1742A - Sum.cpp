#include<iostream>
using namespace std;
int main()
{
    int i,n,a,b,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a==b+c) cout<<"YES\n";
        else if(b==a+c) cout<<"YES\n";
        else if(c==a+b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}