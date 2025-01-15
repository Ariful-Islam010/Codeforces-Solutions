#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,x1,x2,x3;
    cin>>t;
    while(t--)
    {
        cin>>x1>>x2>>x3;
        ll a[]={x1,x2,x3};
        sort(a,a+3);
        cout<<abs(a[0]-a[1])+abs(a[2]-a[1])<<endl;
    }
    return 0;
}
