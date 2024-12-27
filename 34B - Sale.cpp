#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int earning=0;
    for(i=0;i<m;i++)
    {
       if(a[i]<0)
        earning+=-a[i];
    }
    cout<<earning<<endl;
    return 0;
}

