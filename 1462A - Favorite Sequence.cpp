#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    ll left=0,right=n-1;
    for(i=0;i<n;i++)
    {
       if(i%2==0)
       {
           cout<<a[left]<<" ";
           left++;
       }
       else
       {
           cout<<a[right]<<" ";
           right--;
       }
    }
    cout<<endl;
   }
   return 0;
}
