#include<iostream>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        int quality=-1;
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
            if(a[i]<=10)
            {
                if(quality==-1 || b[quality]<b[i])
                {
                    quality=i;
                }
            }
        }
        cout<<quality+1<<endl;
    }
    return 0;
}
