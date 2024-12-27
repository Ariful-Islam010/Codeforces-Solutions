#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x[4],i;
    cin>>x[0]>>x[1]>>x[2]>>x[3];
    int maximum=max(max(x[0],x[1]),max(x[2],x[3]));
    for(i=0;i<4;i++)
    {
       if(maximum!=x[i])
       {
           cout<<maximum-x[i]<<" ";
       }
    }
    return 0;
}
