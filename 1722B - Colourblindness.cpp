#include<iostream>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string a,b;
        cin>>a>>b;
        int matching=0;
        for(i=0;i<n;i++)
        {
            if((a[i]==b[i]) || (a[i]=='G' && b[i]=='B') || (a[i]=='B' && b[i]=='G'))
                matching++;
        }
        if(matching==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
