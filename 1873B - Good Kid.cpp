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
        //Increase 1 small ballon
        a[0]=a[0]+1;
        long long product=1;
        for(i=0;i<n;i++)
        {
            product*=a[i];
        }
        cout<<product<<endl;
    }
    return 0;
}
