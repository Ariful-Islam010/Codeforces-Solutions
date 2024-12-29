#include<iostream>
using namespace std;
int main()
{
    int n,m,i,p; //p=real next prime
    cin>>n>>m;
    for(p=n+1;p<=m;p++)
    {
        int count=0;
        for(i=2;i<p;i++)
        {
            if(p%i==0)
            {
                count++;
            }
        }
        if(count==0) //Next prime p is found
        {
            if(p==m) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            return 0;
        }
        else
        {
            continue;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
