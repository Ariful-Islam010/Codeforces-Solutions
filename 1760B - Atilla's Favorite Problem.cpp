#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    string s;
    string alphabet="abcdefghijklmnopqrstuvwxyz";
    while(t--)
    {
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        int position=alphabet.find(s[n-1]);
        cout<<position+1<<endl;
    }
    return 0;
}
