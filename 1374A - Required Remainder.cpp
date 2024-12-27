#include<iostream>
using namespace std;

int main()
{
    long long t,x,y,n,i;
    cin>>t;
    while (t--)
    {
        cin>>x>>y>>n;
        long long result =(n-y)/x; //(12345-5)/7=1762
        long long k=(result*x)+y; //1762*7+5
        cout<<k<< endl;
    }
    return 0;
}
