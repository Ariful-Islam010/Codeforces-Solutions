#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,current;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int minimum=(c-a)+(b-c);
        for(c=a+1;c<=b;c++)
        {
            current=(c-a)+(b-c);
            if(current<minimum)
            {
                minimum=current;
            }
        }
        cout<<minimum<<endl;
    }
    return 0;
}
