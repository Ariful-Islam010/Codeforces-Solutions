#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,point1,point2;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(c%2==0)
        {
            point1=c/2+a;
            point2=c/2+b;
            if(point1>point2)
                cout<<"First"<<endl;
            else
                cout<<"Second"<<endl;
        }
        else
        {
            point1=c/2+a+1;
            point2=c/2+b;
            if(point1>point2)
                cout<<"First"<<endl;
            else
                cout<<"Second"<<endl;
        }
    }
    return 0;
}
