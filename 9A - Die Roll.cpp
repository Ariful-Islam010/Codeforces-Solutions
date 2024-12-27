#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int y,k,A,B;
    cin>>y>>k;
    A=6-max(y,k)+1;
    if(A==1) cout<<"1/6";
    else if(A==2) cout<<"1/3";
    else if(A==3) cout<<"1/2";
    else if(A==4) cout<<"2/3";
    else if(A==5) cout<<"5/6";
    else cout<<"1/1";
    return 0;
}
