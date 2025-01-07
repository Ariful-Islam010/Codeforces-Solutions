#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,evensum,oddsum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        evensum=0,oddsum=0;
        while(n--)
        {
            cin>>a;
            if(a%2==0)
                evensum+=a;
            else
                oddsum+=a;
        }
        if(evensum>oddsum)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
