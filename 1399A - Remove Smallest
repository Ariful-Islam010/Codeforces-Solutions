#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,n,m,arr[1000],count;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        {
        for(j=0;j<m;j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+m);
        count=0;
        for(j=0;j<m-1;j++)
        {
            if((arr[j+1]-arr[j]==1)||(arr[j+1]-arr[j]==0)) count++;
            else count--;
        }
        if(count==m-1) cout<<"YES\n";
        else cout<<"NO\n";
      }
    }
    return 0;
}
