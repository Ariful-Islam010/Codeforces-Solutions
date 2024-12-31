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
        int min=a[n-1];
        for(i=0;i<n-1;i++)
        {
            if(min>a[i+1]-a[i])
            {
                min=a[i+1]-a[i];
            }
        }
        cout<<min<<endl;
    }
    return 0;
}
