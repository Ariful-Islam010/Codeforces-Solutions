#include<iostream>
using namespace std;
int main()
{
    int t,n,sum_1st_three,sum_last_three,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum_1st_three=0;
        sum_last_three=0;
        for(i=0;i<6;i++)
        {
            if(i<3)
            {
             sum_last_three+=n%10;
             n/=10;
            }
            else
            {
             sum_1st_three+=n%10;
             n/=10;
            }
        }
        if(sum_1st_three==sum_last_three) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
