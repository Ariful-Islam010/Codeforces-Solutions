#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int team=0;
    for(int i=1;i<n;i++)
    {
        if((n-i)%i==0)
        team++;
    }
    cout<<team<<endl;
    return 0;
}
