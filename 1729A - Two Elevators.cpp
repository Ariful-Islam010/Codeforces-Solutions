#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,a,b,c,time1,time2;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        time1=abs(1-a);
        time2=abs(b-c)+abs(c-1);
        if(time1<time2)
            cout<<1<<endl;
        else if(time1>time2)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
    return 0;
}
