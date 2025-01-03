#include<iostream>
using namespace std;
int main()
{
    int t,i,j;
    string s;
    cin>>t;
    while(t--)
    {
        string word="";
        for(i=0;i<8;i++)
        {
            cin>>s;
            for(j=0;j<8;j++)
            {
                if(s[j]!='.')
                word.push_back(s[j]);
            }
        }
        cout<<word<<endl;
    }
    return 0;
}
