#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,d,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>a>>b;
        if(b>a) count++;
        cin>>c;
        if(c>a) count++;
        cin>>d;
        if(d>a) count++;
        cout<<count<<endl;
    }
    return 0;
}
