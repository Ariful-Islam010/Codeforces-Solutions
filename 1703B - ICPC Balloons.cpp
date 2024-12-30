#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char ch[n];
        for(i=0;i<n;i++)
        {
            cin>>ch[i];
        }
        //ABA->AAB
        sort(ch,ch+n);
        int count=0;
        //If distinct element count increase 2,otherwise 1
        for(i=0;i<n;i++)
        {
            if(ch[i]==ch[i+1])
                count++;
            else
                count+=2;
        }
        cout<<count<<endl;
    }
    return 0;
}
