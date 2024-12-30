#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int n,m,i;
    vector<int> arr;
    cin>>n>>m;
    int a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    for(i=0;i<=m-n;i++)
    {
        arr.push_back(a[i+n-1]-a[i]);
    }
    int minimum=*min_element(arr.begin(),arr.end());
    cout<<minimum<<endl;
    return 0;
}
