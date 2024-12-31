#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,count=0;
    cin>>n>>m;
    char ch;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ch;
            if(ch=='W'||ch=='G'||ch=='B')
            {
                count++;
            }
        }
    }
    if(count==(n*m))
        cout<<"#Black&White"<<endl;
    else
        cout<<"#Color"<<endl;
    return 0;
}
