#include<iostream>
using namespace std;
int main()
{
    int t,amazing=0,i;
    cin>>t;
    int arr[t];
    for(i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    int maximum=arr[0];
    int minimum=arr[0];
    for(i=0;i<t;i++)
    {
        if(maximum<arr[i])
        {
            amazing++;
            maximum=arr[i];
        }
        else if(minimum>arr[i])
        {
            amazing++;
            minimum=arr[i];
        }
    }
    cout<<amazing<<endl;
    return 0;
}
