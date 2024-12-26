#include<iostream>
using namespace std;
int main()
{
    int i,j=0,n,arr[1000],a=0,b=0;
    cin>>n;
    int left=0,right=n-1;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
      if(i%2==0)
      {
          if(arr[left]>arr[right])
          {
              a+=arr[left];
              left++;
          }
          else
          {
              a+=arr[right];
              right--;
          }
      }
      if(i%2!=0)
      {
          if(arr[left]>arr[right])
          {
              b+=arr[left];
              left++;
          }
          else
          {
              b+=arr[right];
              right--;
          }
      }
    }
    cout<<a<<" "<<b;
    return 0;
}
