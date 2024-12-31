#include<iostream>
using namespace std;
int main()
{
    int t,n,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int max=0,count=0;
        while(n--)
        {
            cin>>a;
            if(a==0)
            {
                count++;
                if(count>max)
                {
                    max=count;
                }
            }
            else
            {
                count=0;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
