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
        int found=0,element;
        for(i=0;i<n-2;i++)
        {
            if(a[i]==a[i+1] && a[i+1]==a[i+2])
            {
                found=1;
                element=a[i];
                break;
            }
        }
        if(found==1)
            cout<<element<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
