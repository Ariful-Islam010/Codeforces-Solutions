#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,k;
   cin>>t;
   while(t--)
   {
       cin>>n>>k;
       int count=0,balance=0,a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]>=k)
            balance+=a[i];
           else if(a[i]==0 && balance>0)
           {
               balance--;
               count++;
           }
       }
       cout<<count<<endl;
   }
   return 0;
}
