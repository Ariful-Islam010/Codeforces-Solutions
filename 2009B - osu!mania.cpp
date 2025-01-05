#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t,n,i,j;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a;
        for(i=0;i<n;i++)
        {
            cin>>s;
            for(j=0;j<4;j++)
            {
                if(s[j]=='#')
                  a.push_back(j+1);
            }
        }
        for(i=a.size()-1;i>=0;i--)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
