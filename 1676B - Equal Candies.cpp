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
    int candies=0;
    for(i=1;i<n;i++)
    {
        candies+=(a[i]-a[0]);
    }
    cout<<candies<<endl;
    }
    return 0;
}
