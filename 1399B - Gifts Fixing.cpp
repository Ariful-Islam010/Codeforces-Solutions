#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        long long amin=*min_element(a,a+n);
        long long bmin=*min_element(b,b+n);
        long long moves=0;
        for(i=0;i<n;i++)
        {
            moves+=max(a[i]-amin,b[i]-bmin);
        }
        cout<<moves<<endl;
    }
    return 0;
}
