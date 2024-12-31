#include<iostream>
using namespace std;
int main()
{
    int t,n,x,i,count;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        count=0;
        int i=0;
        while(i<n)
        {
            if(i==0)
            {
                count++;
                i+=2;
            }
            else
            {
                count++;
                i+=x;
            }
           }
           cout<<count<<endl;
        }
        return 0;
    }

