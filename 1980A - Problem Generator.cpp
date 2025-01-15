#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,m,A,B,C,D,E,F,G;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cin>>s;
        A=B=C=D=E=F=G=m;
        for(char ch : s)
        {
            if(ch=='A' && A>0)
                A--;
            else if(ch=='B' && B>0)
                B--;
            else if(ch=='C' && C>0)
                C--;
            else if(ch=='D' && D>0)
                D--;
            else if(ch=='E' && E>0)
                E--;
            else if(ch=='F' && F>0)
                F--;
            else if(ch=='G' && G>0)
                G--;
        }
        cout<<A+B+C+D+E+F+G<<endl;
    }
    return 0;
}
