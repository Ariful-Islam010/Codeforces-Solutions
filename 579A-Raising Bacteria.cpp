#include<iostream>
using namespace std;
int main()
{
    int x,rem,count=0;
    cin>>x;
    //convert dec to binary & count the binary 1
    while(x!=0)
    {
        rem=x%2;
        if(rem==1)
        {
            count++;
        }
        x/=2;
    }
    cout<<count;
    return 0;
}
