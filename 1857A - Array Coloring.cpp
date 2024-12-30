#include<iostream>
using namespace std;
int main()
{
    int t,n,a,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        while(n--)
        {
            cin>>a;
            sum+=a;
        }
        if(sum%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
