#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,a,b,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            swap(a,b);
        }
        if((a+a)>b)
            cout<<(a+a)*(a+a)<<endl;
        else
         cout<<b*b<<endl;
    }
    return 0;
}
