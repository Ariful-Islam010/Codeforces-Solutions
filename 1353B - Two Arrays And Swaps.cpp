#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<k;i++)
        {
            if(a[i]<b[n-1-i])
            {
                swap(a[i],b[n-1-i]);
            }
        }
        int sum=0;
        for(i=0;i<n;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
