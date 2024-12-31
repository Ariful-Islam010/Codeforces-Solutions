#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,s1,s2,s3,s4;
    cin>>t;
    while(t--)
    {
        cin>>s1>>s2>>s3>>s4;
        if(s1>s2){
            swap(s1,s2);
        }
        if(s3>s4){
            swap(s3,s4);
        }
        if(s2>s3 && s4>s1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
} 
