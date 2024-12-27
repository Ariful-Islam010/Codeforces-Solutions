#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,arr[1000],sum=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n-1;i++)
    {
        sum+=arr[n-1]-arr[i];
    }
    cout<<sum;
    return 0;
}
