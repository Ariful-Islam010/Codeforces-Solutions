#include<iostream>
using namespace std;
int main()
{
    int t,n,k,a;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int found=0;
        while(n--)
        {
           cin>>a;
           if(a==k)
            found++;
        }
        if(found>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
