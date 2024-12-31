#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int count=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]>a[i])
                count++;
        }
        if(count==n-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
