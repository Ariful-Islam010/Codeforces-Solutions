#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long x1,y1,x2,y2,x3,y3,x4,y4;
    while(t--)
    {
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        cin>>x4>>y4;
        long long d1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        long long d2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
        long long d3=sqrt(pow(x3-x4,2)+pow(y3-y4,2));
        long long a=min(d1,min(d2,d3));
        cout<<a*a<<endl;
    }
    return 0;
}
